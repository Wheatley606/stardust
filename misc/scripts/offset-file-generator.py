import pandas

indent = ""

versionToStardust = {
    "1.0.0" : "DEFAULT",
    "1.2.0" : "V1_2_0",
    "1.3.0" : "V1_3_0"
}

fileBegin = """#pragma once

#include <common.hpp>
#include <tuple>

#include "version.hpp"

namespace exl::reloc {
    using VersionType = util::UserVersion;

    template<VersionType Version, impl::LookupEntry... Entries>
    using UserTableType = VersionedTable<Version, Entries...>;

    using UserTableSet = TableSet<VersionType, 
"""

fileEnd = """
    >;
}"""

def Clean_Result(String):
    Temp = String.replace(" ", "")

    if (len(Temp) == 0):
        return ""

    while (String[0] == "\t"):
        String = String[1:]

    while (String[-1] == "\t"):
        String = String[:-1]

    while (String[0] == "\n"):
        String = String[1:]

    while (String[-1] == "\n"):
        String = String[:-1]

    while (String[0] == " "):
        String = String[1:]

    while (String[-1] == " "):
        String = String[:-1]

    return String

def addIndent(IndentAmount):
    global indent
    for i in range(IndentAmount):
        indent += "\t"

def removeIndent(IndentAmount):
    global indent
    indent = indent[:-IndentAmount]

def writeLineToFile(file, Input):
    global indent

    Liste = Input.split('\n')
    for i in range (len (Liste)):
        Liste[i] = Clean_Result(Liste[i])
        file.write(f"{indent}{Liste[i]}\n")

def writeToFileNoReturn(file, Input):
    global indent

    Liste = Input.split('\n')
    for i in range (len (Liste)):
        Liste[i] = Clean_Result(Liste[i])
        file.write(f"{indent}{Liste[i]}")

def generateVersionUserTable(file, version : str, offsets : pandas.DataFrame, isLastUserTable : bool):
    global versionToStardust

    symbolCount = len(offsets.index.values)

    addIndent(2)
    writeLineToFile(file, f"UserTableType<VersionType::{versionToStardust[version]},")

    addIndent(1)
    for i in range(symbolCount):
        line = "{ util::ModuleIndex::Main,          " + offsets[version][i] + ",                 \"" + offsets["symbol"][i] + "\" }"
        if i < symbolCount - 1:
            line += ","
        writeLineToFile(file, line)

    removeIndent(1)
    writeToFileNoReturn(file, ">")

    if isLastUserTable == False:
        file.write(",\n\n")

    removeIndent(2)

def main():
    offsets = pandas.read_csv("offsets.csv")

    versions = list(offsets.columns.values)[1:]

    file = open("source/program/offsets.hpp", "w+")

    file.write(fileBegin)

    for i in range (len(versions)):
        generateVersionUserTable(file, versions[i], offsets, i == len(versions) - 1)

    file.write(fileEnd)

    file.close()

main()
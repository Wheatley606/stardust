#pragma once

#include "nn/result.hpp"

#include <string>
#include <format>

#define PACKET_MAX_SIZE 0x500

enum class SocketState {
    UNINITIALIZED = 0,
    CONNECTED = 1,
    UNAVAILABLE = 2,
    DISCONNECTED = 3
};

class Socket {
public:
    Socket() = default;

    nn::Result init(const char* ip, u16 port);

    void sendMessage(const char* message);
    //const char* receiveMessage();
    void close();

    bool isConnected();

protected:
    SocketState mState;

private:
    int mSocketFd;
};

namespace logger
{
    nn::Result init(const char* ip, u16 port);
    void log(std::string message);
    bool isConnected();
    void close();
}
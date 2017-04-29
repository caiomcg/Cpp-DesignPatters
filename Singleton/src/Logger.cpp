#include "Logger.h"

Logger::Logger() {
    logger = std::ofstream("./logger.log", std::ios::out);
    if (!logger.is_open()) {
        throw std::runtime_error("Could not open the file");
    }
}

Logger::~Logger() {
    if (logger.is_open()) {
        logger.close();
    }
}

Logger& Logger::getInstance() {
    static Logger instance;
    return instance;
}

void Logger::debug(const std::string& message) {
    this->putMessage("DEBUG", message);
}

void Logger::error(const std::string& message) {
    this->putMessage("ERROR", message);
}

void Logger::log(const std::string& message) {
    this->putMessage("LOG", message);
}

void Logger::info(const std::string& message) {
    this->putMessage("INFO", message);
}

void Logger::putMessage(const std::string& type, const std::string& message) {
    logger << "[" + type + "] - " + message + "\n";
}

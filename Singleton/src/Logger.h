#ifndef SINGLETON_H
#define SINGLETON_H

#include <fstream> // Ofstream type that handles output files.
#include <string>  // String type that will be passed to the logger.

class Logger {
public:
    static Logger& getInstance(); // Return the instance to the singleton.

    void debug(const std::string& message); // Puts - message in the log.
    void error(const std::string& message); // Puts - message in the log.
    void log(const std::string& message);   // Puts - message in the log.
    void info(const std::string& message);  // Puts - message in the log.

    Logger(const Logger&)            = delete; // We don't need the copy constructor as this is a singleton.
    Logger& operator=(const Logger&) = delete; // Copy assignment is not needed also.
private:
    Logger();  // Constructor() - Our constructor must be private.
    ~Logger(); // Destructor().

    void putMessage(const std::string& type, const std::string& message); // Message formatter.

    std::ofstream logger; // Handles the log file.
};

#endif // defines SINGLETON_H

#ifndef CURL_HELPER_H
#define CURL_HELPER_H

class CURLHelper {
    private:
        CURLHelper();
    public:
        //! write function with size_t return value
        /*! Writes into the given string from the pointer with size*nmemb memory
        */
        static size_t write(void *ptr, size_t size, size_t nmemb, std::string *str);
        //! get function with void return value
        /*! Makes a GET Request with a given url and saves the result into a str
        */
        static void get(std::string url, std::string *str);
        //! post function with void return value
        /*! Makaes a POST Request with a given url and saves the result into a str
        */
        static void post(std::string url, std::string data);
};

#endif
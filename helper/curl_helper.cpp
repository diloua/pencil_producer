#include <iostream>

#include <curl/curl.h>
#include <string>

#include "curl_helper.h"

size_t CURLHelper::write(void *ptr, size_t size, size_t nmemb, std::string *str) {
    str->append((char*)ptr, size*nmemb);
    return size*nmemb;
}

void CURLHelper::get(std::string url, std::string *str) {
    CURL *curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, CURLHelper::write);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, str);
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
}

void CURLHelper::post(std::string url, std::string data) {
    CURL *curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data.c_str());

        /* change header type */
        struct curl_slist *hs=NULL;
        hs = curl_slist_append(hs, "Content-Type: application/json");
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, hs);

        // std::cout << url << std::endl;
        // std::cout << data << std::endl;

        CURLcode res = curl_easy_perform(curl);
        if(res != CURLE_OK) fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        curl_easy_cleanup(curl);
    }
}
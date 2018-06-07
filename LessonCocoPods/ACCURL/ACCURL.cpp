//
//  ACCURL.cpp
//  MDKLocalCache
//
//  Created by QuinnQiu on 2017/6/9.
//  Copyright © 2017年 QuinnQiu. All rights reserved.
//

#include "ACCURL.hpp"
#include <regex>

#ifdef OS_MAC
static const std::string pattern = std::string("([^:]+)://([^/:?]+):?(\\d{2,5})?(/[^?]+)?\\??([^#]+)?#?(.+)?");
#else
static const std::string pattern = std::string("([^:]+)://([^/:?]+):?(\\d{2,5})?(/[^?]+)?[?]?([^#]+)?#?(.+)?");
#endif

ACCURL::ACCURL(void) {
    
}

ACCURL::~ACCURL(void) {
    
}


int ACCURL::ParseUrl(const std::string &sUrl) {
    std::regex ex(pattern.c_str());
    
    std::smatch what;
    bool ret = std::regex_match(sUrl, what, ex);
    if(ret) {
        m_scheme    = std::string(what[1].first, what[1].second);
        m_host      = std::string(what[2].first, what[2].second);
        m_port      = std::string(what[3].first, what[3].second);
        m_path      = std::string(what[4].first, what[4].second);
        m_query     = std::string(what[5].first, what[5].second);
        m_fragment  = std::string(what[6].first, what[6].second);
    } else {
        return -1;
    }
    
    return 0;
}

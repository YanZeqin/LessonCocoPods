//
//  ACCURL.hpp
//  MDKLocalCache
//
//  Created by QuinnQiu on 2017/6/9.
//  Copyright © 2017年 QuinnQiu. All rights reserved.
//

#ifndef ACCURL_hpp
#define ACCURL_hpp

#include <stdio.h>
#include <string>

class ACCURL {
public:
    ACCURL(void);
    ~ACCURL(void);
    /**
     *  解析URL
     *
     *  @param sUrl url字符串
     *
     *  @return 状态码
     */
    int ParseUrl(const std::string &sUrl);
public://getter，调用者根据自己需求自己获取
    const std::string GetScheme(void)   const { return m_scheme;    }
    const std::string GetHost(void)     const { return m_host;      }
    const std::string GetPort(void)     const { return m_port;      }
    const std::string GetPath(void)     const { return m_path;      }
    const std::string GetQuery(void)    const { return m_query;     }
    const std::string GetFragment(void) const { return m_fragment;  }
    const std::string GetUserName(void) const { return m_username;  }
    const std::string GetPassword(void) const { return m_password;  }
private:
    std::string m_scheme;               /* mandatory */
    std::string m_host;                 /* mandatory */
    std::string m_port;                 /* optional */
    std::string m_path;                 /* optional */
    std::string m_query;                /* optional */
    std::string m_fragment;             /* optional */
    std::string m_username;             /* optional */
    std::string m_password;             /* optional */
};

#endif /* ACCURL_hpp */

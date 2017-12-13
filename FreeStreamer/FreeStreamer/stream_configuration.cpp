/*
 * This file is part of the FreeStreamer project,
 * (C)Copyright 2011-2016 Matias Muhonen <mmu@iki.fi> 穆马帝
 * See the file ''LICENSE'' for using the code.
 *
 * https://github.com/muhku/FreeStreamer
 */

#include "stream_configuration.h"

namespace astreamer {
    
Stream_Configuration::Stream_Configuration() :
    proxyHost(NULL),
    proxyPort(NULL),
    userAgent(NULL),
    cacheDirectory(NULL),
    predefinedHttpHeaderValues(NULL)
{
}

Stream_Configuration::~Stream_Configuration()
{
    if (userAgent) {
        CFRelease(userAgent), userAgent = NULL;
    }
    if (proxyHost) {
        CFRelease(proxyHost), proxyHost = NULL;
    }
    if (proxyPort) {
        CFRelease(proxyPort), proxyPort = NULL;
    }
}

Stream_Configuration* Stream_Configuration::configuration()
{
    static Stream_Configuration config;
    return &config;
}
    
}

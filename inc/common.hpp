// This file is a part of the IncludeOS unikernel - www.includeos.org
//
// Copyright 2015-2016 Oslo and Akershus University College of Applied Sciences
// and Alfred Bratterud
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef HTTP_COMMON_HPP
#define HTTP_COMMON_HPP

#include <string>
#include <memory>
#include <vector>
#include <utility>
#include <cstdint>

/*
 * Symbol used within the HTTP/2 protocol which
 * specifies the maximum size of the payload in
 * a frame
 */
#ifndef SETTINGS_MAX_FRAME_SIZE
#define SETTINGS_MAX_FRAME_SIZE 16777215
#endif

namespace http {

using URI   = std::string;
using Limit = std::size_t;

using CString   = const char*;
using HeaderSet = std::vector<std::pair<CString, CString>>;

using buffer_t = std::shared_ptr<uint8_t>;

class Request;
using Request_ptr = std::shared_ptr<Request>;

class Response;
using Response_ptr = std::shared_ptr<Response>;

} //< namespace http

#endif //< HTTP_COMMON_HPP

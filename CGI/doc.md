### CGI
- 公共网关接口（CGI），是一套标准，定义了信息是如何在 Web 服务器和客户端脚本之间进行交换的
- CGI 规范目前是由 NCSA 维护的，NCSA 定义 CGI 如下：
    - 公共网关接口（CGI），是一种用于外部网关程序与信息服务器（如 HTTP 服务器）对接的接口标准
    - 目前的版本是 CGI/1.1，CGI/1.2 版本正在推进中

### Web 浏览

### CGI 架构图



### CGI 环境变量
- CONTENT_TYPE 内容的数据类型; 当客户端向服务器发送附加内容时使用; 例如，文件上传等功能
- CONTENT_LENGTH 查询的信息长度; 只对 POST 请求可用
- HTTP_COOKIE 以键 & 值对的形式返回设置的 cookies
- HTTP_USER_AGENT 用户代理请求标头字段，递交用户发起请求的有关信息，包含了浏览器的名称、版本和其他平台性的附加信息
- PATH_INFO CGI 脚本的路径
- QUERY_STRING 通过 GET 方法发送请求时的 URL 编码信息，包含 URL 中问号后面的参数
- REMOTE_ADDR 发出请求的远程主机的 IP 地址。这在日志记录和认证时是非常有用的
- REMOTE_HOST 发出请求的主机的完全限定名称。如果此信息不可用，则可以用 REMOTE_ADDR 来获取 IP 地址
- REQUEST_METHOD 用于发出请求的方法。最常见的方法是 GET 和 POST
- SCRIPT_FILENAME CGI 脚本的完整路径
- SCRIPT_NAME CGI 脚本的名称
- SERVER_NAME 服务器的主机名或 IP 地址
- SERVER_SOFTWARE 服务器上运行的软件的名称和版本
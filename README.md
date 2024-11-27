<h1 align="center">E M P E R O R
<a href="http://netty.io/"></a></h1>

<h1 align="center">
  <a href=https://github.com/byt3n33dl3/thc-Emperor><img src="emp.png" alt="Emperor" width="280px">
  <br>
</h1>

<p align="center">
  <a href="#">Networks</a> •
  <a href="#">Arch</a> •
  <a href="#">Exec</a>
</p>

## Native Fork for [Netty](https://github.com/netty/netty)

See our [wiki page](http://netty.io/wiki/forked-tomcat-native.html).

# Usage 

Emperor can be used in modular JDK9+ applications as a collection of automatic modules. The module names follow the
reverse DNS style, and are derived from subproject names rather than root packages due to historical reasons. They
are listed below:

 * `io.netty.all`
 * `io.netty.buffer`
 * `io.netty.codec`
 * `io.netty.codec.dns`
 * `io.netty.codec.haproxy`
 * `io.netty.codec.http`
 * `io.netty.codec.http2`
 * `io.netty.codec.memcache`
 * `io.netty.codec.mqtt`
 * `io.netty.codec.redis`
 * `io.netty.codec.smtp`
 * `io.netty.codec.socks`
 * `io.netty.codec.stomp`
 * `io.netty.codec.xml`
 * `io.netty.common`
 * `io.netty.handler`
 * `io.netty.handler.proxy`
 * `io.netty.resolver`
 * `io.netty.resolver.dns`
 * `io.netty.transport`
 * `io.netty.transport.epoll` (`native` omitted - reserved keyword in Java)
 * `io.netty.transport.kqueue` (`native` omitted - reserved keyword in Java)
 * `io.netty.transport.unix.common` (`native` omitted - reserved keyword in Java)
 * `io.netty.transport.rxtx`
 * `io.netty.transport.sctp`
 * `io.netty.transport.udt`

## Automatic Modules 
do not provide any means to declare dependencies, so you need to list each used module separately in your module `info` file.
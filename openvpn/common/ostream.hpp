#ifndef OPENVPN_COMMON_OSTREAM_H
#define OPENVPN_COMMON_OSTREAM_H

#include <ostream>
#include <string>

#define OPENVPN_OSTREAM(TYPE, TO_STRING) \
    template <typename Elem, typename Traits> \
    std::basic_ostream<Elem, Traits>& operator<<( \
      std::basic_ostream<Elem, Traits>& os, const TYPE& addr) \
    { \
      std::string s = addr.TO_STRING(); \
      os << s; \
      return os; \
    }

#endif // OPENVPN_COMMON_OSTREAM_H
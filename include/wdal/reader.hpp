#pragma once

#include <wdal/pulse.hpp>


namespace wdal
{


class Reader {
public:

    Reader();
    virtual ~Reader();

    virtual Pulse next() = delete;

};


}

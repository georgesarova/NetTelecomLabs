#ifndef HELPERS_H
#define HELPERS_H

const int TIMEOUT = 1000;
const int BLOCK_SIZE = 512;
const char* const DOWNLOADS = "Downloads";

namespace State
{
namespace Request
{
const quint32 REQ_ID = 0;
const quint32 SEND_DATA = 3;
const quint32 SEND_FINISH = 6;
}

namespace Response
{
const quint32 RESP_ID = 1;
const quint32 RECV_DATA = 4;
const quint32 RECV_FINISH = 7;
}

namespace Error
{
const quint32 RETRANSMISSION_FAILED = 2;
}
}

#endif // HELPERS_H

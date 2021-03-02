#ifndef SRC_CODEC_CODECJSON_HPP_
#define SRC_CODEC_CODECJSON_HPP_

#include "Codec.hpp"

namespace neb
{

class CodecJson: public Codec
{
public:
    CodecJson(std::shared_ptr<NetLogger> pLogger, E_CODEC_TYPE eCodecType);
    virtual ~CodecJson();

    virtual E_CODEC_STATUS Encode(const MsgHead& oMsgHead, const MsgBody& oMsgBody, CBuffer* pBuff);
    virtual E_CODEC_STATUS Decode(CBuffer* pBuff, MsgHead& oMsgHead, MsgBody& oMsgBody);
};

} /* namespace neb */

#endif /* SRC_CODEC_CODECJSON_HPP_ */

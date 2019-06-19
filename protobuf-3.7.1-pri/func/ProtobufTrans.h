#ifndef _PROTOBUF_FUNC_PROTOBUFTRANS_H_
#define _PROTOBUF_FUNC_PROTOBUFTRANS_H_

#include "Messages/Message.pb.h"
#include "CMessage.h"

RoleOfClass transRole(const InfoUser::Role r);
InfoUser::Role transRoleReverse(RoleOfClass r);

quint16 transGender(const InfoUser::Gender g);
InfoUser::Gender transGenderReverse(quint16 g);

//InfoUser *userBaseToInfoUser(const UserBase& ub);
//const UserBase infoUserToUserBase(const InfoUser& iu);

//const CLASS_INFO transClassInfo(const InfoClass ic);
//InfoClass* transClassInfoReverse(CLASS_INFO ci);

std::string arrayToString(unsigned char array[], int size = -1);

QByteArray getByteArrayFromarchive(QString archive);
QByteArray getarchiveFromProtobuf(const ::google::protobuf::Message& msg);


#endif  //_PROTOBUF_FUNC_PROTOBUFTRANS_H_

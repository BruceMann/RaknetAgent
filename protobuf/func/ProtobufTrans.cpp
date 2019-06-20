#include "ProtobufTrans.h"

RoleOfClass transRole(const InfoUser::Role r) {
    if (r == InfoUser::Teacher)
        return RoleOfClass::Teacher;
    else if (r == InfoUser::Student)
        return RoleOfClass::Student;
    else if (r == InfoUser::Leader)
        return RoleOfClass::SchoolLearder;
    else
        return RoleOfClass::Unset;
}


InfoUser::Role transRoleReverse(RoleOfClass r) {
    if (r == RoleOfClass::SchoolLearder)
        return InfoUser::Leader;
    else if (r == RoleOfClass::Teacher)
        return InfoUser::Teacher;
    else if (r == RoleOfClass::Student)
        return InfoUser::Student;
    else
        return InfoUser::UnSet;
}


InfoUser::Gender transGenderReverse(quint16 g) {
    if (g == GenderFemale)
        return InfoUser::Female;
    else if (g == GenderMale)
        return InfoUser::Male;
    else
        return InfoUser::Unknown;
}


quint16 transGender(const InfoUser::Gender g){
    if (g == InfoUser::Female)
        return GenderFemale;
    else if (g == InfoUser::Male)
        return GenderMale;
    else
        return GenderUnknown;
}

std::string arrayToString(unsigned char array[], int size) {
    return QString::fromUtf8((char*) array, size).toStdString();
}


QByteArray getarchiveFromProtobuf(const google::protobuf::Message &msg) {
    return QByteArray::fromStdString(msg.SerializeAsString()).toHex();
}


QByteArray getByteArrayFromarchive(QString archive) {
    return QByteArray::fromHex(QByteArray::fromStdString(archive.toStdString()));
}

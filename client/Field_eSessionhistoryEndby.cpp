/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Field_eSessionhistoryEndby.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eSessionhistoryEndby::Field_eSessionhistoryEndby(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eSessionhistoryEndby::Field_eSessionhistoryEndby() {
    this->initializeModel();
}

Field_eSessionhistoryEndby::~Field_eSessionhistoryEndby() {}

void Field_eSessionhistoryEndby::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eSessionhistoryEndby::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eSessionhistoryEndby::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Decryption", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSessionhistoryEndby::DECRYPTION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Hack", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSessionhistoryEndby::HACK;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Expired", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSessionhistoryEndby::EXPIRED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Hijack", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSessionhistoryEndby::HIJACK;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DoubleLogon", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSessionhistoryEndby::DOUBLELOGON;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Garbage", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSessionhistoryEndby::GARBAGE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Logoff", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSessionhistoryEndby::LOGOFF;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BadAuth", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSessionhistoryEndby::BADAUTH;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Locked", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSessionhistoryEndby::LOCKED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Inactive", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSessionhistoryEndby::INACTIVE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("InvalidUser", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSessionhistoryEndby::INVALIDUSER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BadUserType", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSessionhistoryEndby::BADUSERTYPE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BadIP", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSessionhistoryEndby::BADIP;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ForcedLogoff", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSessionhistoryEndby::FORCEDLOGOFF;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eSessionhistoryEndby::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eSessionhistoryEndby::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eSessionhistoryEndby::DECRYPTION:
            val = "Decryption";
            break;
        case eField_eSessionhistoryEndby::HACK:
            val = "Hack";
            break;
        case eField_eSessionhistoryEndby::EXPIRED:
            val = "Expired";
            break;
        case eField_eSessionhistoryEndby::HIJACK:
            val = "Hijack";
            break;
        case eField_eSessionhistoryEndby::DOUBLELOGON:
            val = "DoubleLogon";
            break;
        case eField_eSessionhistoryEndby::GARBAGE:
            val = "Garbage";
            break;
        case eField_eSessionhistoryEndby::LOGOFF:
            val = "Logoff";
            break;
        case eField_eSessionhistoryEndby::BADAUTH:
            val = "BadAuth";
            break;
        case eField_eSessionhistoryEndby::LOCKED:
            val = "Locked";
            break;
        case eField_eSessionhistoryEndby::INACTIVE:
            val = "Inactive";
            break;
        case eField_eSessionhistoryEndby::INVALIDUSER:
            val = "InvalidUser";
            break;
        case eField_eSessionhistoryEndby::BADUSERTYPE:
            val = "BadUserType";
            break;
        case eField_eSessionhistoryEndby::BADIP:
            val = "BadIP";
            break;
        case eField_eSessionhistoryEndby::FORCEDLOGOFF:
            val = "ForcedLogoff";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eSessionhistoryEndby::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eSessionhistoryEndby::eField_eSessionhistoryEndby Field_eSessionhistoryEndby::getValue() const {
    return m_value;
}

void Field_eSessionhistoryEndby::setValue(const Field_eSessionhistoryEndby::eField_eSessionhistoryEndby& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eSessionhistoryEndby::isSet() const {
    
    return m_value_isSet;
}

bool Field_eSessionhistoryEndby::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi

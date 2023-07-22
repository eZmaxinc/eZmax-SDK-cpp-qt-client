/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICommon_Response_Filter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Response_Filter::OAICommon_Response_Filter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Response_Filter::OAICommon_Response_Filter() {
    this->initializeModel();
}

OAICommon_Response_Filter::~OAICommon_Response_Filter() {}

void OAICommon_Response_Filter::initializeModel() {

    m_a_auto_type_isSet = false;
    m_a_auto_type_isValid = false;

    m_a_enum_isSet = false;
    m_a_enum_isValid = false;
}

void OAICommon_Response_Filter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Response_Filter::fromJsonObject(QJsonObject json) {

    m_a_auto_type_isValid = ::OpenAPI::fromJsonValue(a_auto_type, json[QString("a_AutoType")]);
    m_a_auto_type_isSet = !json[QString("a_AutoType")].isNull() && m_a_auto_type_isValid;

    if(json["a_Enum"].isObject()){
        auto varmap = json["a_Enum"].toObject().toVariantMap();
        m_a_enum_isValid = true;
        if(varmap.count() > 0){
            for(auto val : varmap.keys()){
                QMap<QString, QString> item;
                auto jval = QJsonValue::fromVariant(varmap.value(val));
                m_a_enum_isValid &= ::OpenAPI::fromJsonValue(item, jval);
                m_a_enum_isSet &= !jval.isNull() && m_a_enum_isValid;
                a_enum.insert(a_enum.end(), val, item);
            }
        }
    }
}

QString OAICommon_Response_Filter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Response_Filter::asJsonObject() const {
    QJsonObject obj;
    if (a_auto_type.size() > 0) {
        obj.insert(QString("a_AutoType"), ::OpenAPI::toJsonValue(a_auto_type));
    }
    if (a_enum.size() > 0) {
        
        obj.insert(QString("a_Enum"), toJsonValue(a_enum));
    }
    return obj;
}

QMap<QString, QString> OAICommon_Response_Filter::getAAutoType() const {
    return a_auto_type;
}
void OAICommon_Response_Filter::setAAutoType(const QMap<QString, QString> &a_auto_type) {
    this->a_auto_type = a_auto_type;
    this->m_a_auto_type_isSet = true;
}

bool OAICommon_Response_Filter::is_a_auto_type_Set() const{
    return m_a_auto_type_isSet;
}

bool OAICommon_Response_Filter::is_a_auto_type_Valid() const{
    return m_a_auto_type_isValid;
}

QMap<QString, QMap<QString, QString>> OAICommon_Response_Filter::getAEnum() const {
    return a_enum;
}
void OAICommon_Response_Filter::setAEnum(const QMap<QString, QMap<QString, QString>> &a_enum) {
    this->a_enum = a_enum;
    this->m_a_enum_isSet = true;
}

bool OAICommon_Response_Filter::is_a_enum_Set() const{
    return m_a_enum_isSet;
}

bool OAICommon_Response_Filter::is_a_enum_Valid() const{
    return m_a_enum_isValid;
}

bool OAICommon_Response_Filter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_auto_type.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_enum.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Response_Filter::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI

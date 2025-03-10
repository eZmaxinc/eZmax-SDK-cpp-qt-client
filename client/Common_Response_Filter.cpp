/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Common_Response_Filter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Common_Response_Filter::Common_Response_Filter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Common_Response_Filter::Common_Response_Filter() {
    this->initializeModel();
}

Common_Response_Filter::~Common_Response_Filter() {}

void Common_Response_Filter::initializeModel() {

    m_a_auto_type_isSet = false;
    m_a_auto_type_isValid = false;

    m_a_auto_type_having_isSet = false;
    m_a_auto_type_having_isValid = false;

    m_a_enum_isSet = false;
    m_a_enum_isValid = false;
}

void Common_Response_Filter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Common_Response_Filter::fromJsonObject(QJsonObject json) {

    m_a_auto_type_isValid = ::Ezmaxapi::fromJsonValue(m_a_auto_type, json[QString("a_AutoType")]);
    m_a_auto_type_isSet = !json[QString("a_AutoType")].isNull() && m_a_auto_type_isValid;

    m_a_auto_type_having_isValid = ::Ezmaxapi::fromJsonValue(m_a_auto_type_having, json[QString("a_AutoTypeHaving")]);
    m_a_auto_type_having_isSet = !json[QString("a_AutoTypeHaving")].isNull() && m_a_auto_type_having_isValid;

    if(json["a_Enum"].isObject()){
        auto varmap = json["a_Enum"].toObject().toVariantMap();
        m_a_enum_isValid = true;
        if(varmap.count() > 0){
            for(auto val : varmap.keys()){
                QMap<QString, QString> item;
                auto jval = QJsonValue::fromVariant(varmap.value(val));
                m_a_enum_isValid &= ::Ezmaxapi::fromJsonValue(item, jval);
                m_a_enum_isSet &= !jval.isNull() && m_a_enum_isValid;
                m_a_enum.insert(m_a_enum.end(), val, item);
            }
        }
    }
}

QString Common_Response_Filter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Common_Response_Filter::asJsonObject() const {
    QJsonObject obj;
    if (m_a_auto_type.size() > 0) {
        obj.insert(QString("a_AutoType"), ::Ezmaxapi::toJsonValue(m_a_auto_type));
    }
    if (m_a_auto_type_having.size() > 0) {
        obj.insert(QString("a_AutoTypeHaving"), ::Ezmaxapi::toJsonValue(m_a_auto_type_having));
    }
    if (m_a_enum.size() > 0) {
        
        obj.insert(QString("a_Enum"), toJsonValue(m_a_enum));
    }
    return obj;
}

QMap<QString, QString> Common_Response_Filter::getAAutoType() const {
    return m_a_auto_type;
}
void Common_Response_Filter::setAAutoType(const QMap<QString, QString> &a_auto_type) {
    m_a_auto_type = a_auto_type;
    m_a_auto_type_isSet = true;
}

bool Common_Response_Filter::is_a_auto_type_Set() const{
    return m_a_auto_type_isSet;
}

bool Common_Response_Filter::is_a_auto_type_Valid() const{
    return m_a_auto_type_isValid;
}

QMap<QString, QString> Common_Response_Filter::getAAutoTypeHaving() const {
    return m_a_auto_type_having;
}
void Common_Response_Filter::setAAutoTypeHaving(const QMap<QString, QString> &a_auto_type_having) {
    m_a_auto_type_having = a_auto_type_having;
    m_a_auto_type_having_isSet = true;
}

bool Common_Response_Filter::is_a_auto_type_having_Set() const{
    return m_a_auto_type_having_isSet;
}

bool Common_Response_Filter::is_a_auto_type_having_Valid() const{
    return m_a_auto_type_having_isValid;
}

QMap<QString, QMap<QString, QString>> Common_Response_Filter::getAEnum() const {
    return m_a_enum;
}
void Common_Response_Filter::setAEnum(const QMap<QString, QMap<QString, QString>> &a_enum) {
    m_a_enum = a_enum;
    m_a_enum_isSet = true;
}

bool Common_Response_Filter::is_a_enum_Set() const{
    return m_a_enum_isSet;
}

bool Common_Response_Filter::is_a_enum_Valid() const{
    return m_a_enum_isValid;
}

bool Common_Response_Filter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_auto_type.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_auto_type_having.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_enum.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Common_Response_Filter::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi

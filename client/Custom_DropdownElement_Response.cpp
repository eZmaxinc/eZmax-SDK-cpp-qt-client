/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Custom_DropdownElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Custom_DropdownElement_Response::Custom_DropdownElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Custom_DropdownElement_Response::Custom_DropdownElement_Response() {
    this->initializeModel();
}

Custom_DropdownElement_Response::~Custom_DropdownElement_Response() {}

void Custom_DropdownElement_Response::initializeModel() {

    m_s_label_isSet = false;
    m_s_label_isValid = false;

    m_s_value_isSet = false;
    m_s_value_isValid = false;
}

void Custom_DropdownElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Custom_DropdownElement_Response::fromJsonObject(QJsonObject json) {

    m_s_label_isValid = ::Ezmaxapi::fromJsonValue(m_s_label, json[QString("sLabel")]);
    m_s_label_isSet = !json[QString("sLabel")].isNull() && m_s_label_isValid;

    m_s_value_isValid = ::Ezmaxapi::fromJsonValue(m_s_value, json[QString("sValue")]);
    m_s_value_isSet = !json[QString("sValue")].isNull() && m_s_value_isValid;
}

QString Custom_DropdownElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Custom_DropdownElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_label_isSet) {
        obj.insert(QString("sLabel"), ::Ezmaxapi::toJsonValue(m_s_label));
    }
    if (m_s_value_isSet) {
        obj.insert(QString("sValue"), ::Ezmaxapi::toJsonValue(m_s_value));
    }
    return obj;
}

QString Custom_DropdownElement_Response::getSLabel() const {
    return m_s_label;
}
void Custom_DropdownElement_Response::setSLabel(const QString &s_label) {
    m_s_label = s_label;
    m_s_label_isSet = true;
}

bool Custom_DropdownElement_Response::is_s_label_Set() const{
    return m_s_label_isSet;
}

bool Custom_DropdownElement_Response::is_s_label_Valid() const{
    return m_s_label_isValid;
}

QString Custom_DropdownElement_Response::getSValue() const {
    return m_s_value;
}
void Custom_DropdownElement_Response::setSValue(const QString &s_value) {
    m_s_value = s_value;
    m_s_value_isSet = true;
}

bool Custom_DropdownElement_Response::is_s_value_Set() const{
    return m_s_value_isSet;
}

bool Custom_DropdownElement_Response::is_s_value_Valid() const{
    return m_s_value_isValid;
}

bool Custom_DropdownElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_value_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Custom_DropdownElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_label_isValid && m_s_value_isValid && true;
}

} // namespace Ezmaxapi

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

#include "Custom_FormDataEzsignformfield_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Custom_FormDataEzsignformfield_Response::Custom_FormDataEzsignformfield_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Custom_FormDataEzsignformfield_Response::Custom_FormDataEzsignformfield_Response() {
    this->initializeModel();
}

Custom_FormDataEzsignformfield_Response::~Custom_FormDataEzsignformfield_Response() {}

void Custom_FormDataEzsignformfield_Response::initializeModel() {

    m_s_ezsignformfield_label_isSet = false;
    m_s_ezsignformfield_label_isValid = false;

    m_s_ezsignformfield_value_isSet = false;
    m_s_ezsignformfield_value_isValid = false;
}

void Custom_FormDataEzsignformfield_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Custom_FormDataEzsignformfield_Response::fromJsonObject(QJsonObject json) {

    m_s_ezsignformfield_label_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignformfield_label, json[QString("sEzsignformfieldLabel")]);
    m_s_ezsignformfield_label_isSet = !json[QString("sEzsignformfieldLabel")].isNull() && m_s_ezsignformfield_label_isValid;

    m_s_ezsignformfield_value_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignformfield_value, json[QString("sEzsignformfieldValue")]);
    m_s_ezsignformfield_value_isSet = !json[QString("sEzsignformfieldValue")].isNull() && m_s_ezsignformfield_value_isValid;
}

QString Custom_FormDataEzsignformfield_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Custom_FormDataEzsignformfield_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezsignformfield_label_isSet) {
        obj.insert(QString("sEzsignformfieldLabel"), ::Ezmaxapi::toJsonValue(m_s_ezsignformfield_label));
    }
    if (m_s_ezsignformfield_value_isSet) {
        obj.insert(QString("sEzsignformfieldValue"), ::Ezmaxapi::toJsonValue(m_s_ezsignformfield_value));
    }
    return obj;
}

QString Custom_FormDataEzsignformfield_Response::getSEzsignformfieldLabel() const {
    return m_s_ezsignformfield_label;
}
void Custom_FormDataEzsignformfield_Response::setSEzsignformfieldLabel(const QString &s_ezsignformfield_label) {
    m_s_ezsignformfield_label = s_ezsignformfield_label;
    m_s_ezsignformfield_label_isSet = true;
}

bool Custom_FormDataEzsignformfield_Response::is_s_ezsignformfield_label_Set() const{
    return m_s_ezsignformfield_label_isSet;
}

bool Custom_FormDataEzsignformfield_Response::is_s_ezsignformfield_label_Valid() const{
    return m_s_ezsignformfield_label_isValid;
}

QString Custom_FormDataEzsignformfield_Response::getSEzsignformfieldValue() const {
    return m_s_ezsignformfield_value;
}
void Custom_FormDataEzsignformfield_Response::setSEzsignformfieldValue(const QString &s_ezsignformfield_value) {
    m_s_ezsignformfield_value = s_ezsignformfield_value;
    m_s_ezsignformfield_value_isSet = true;
}

bool Custom_FormDataEzsignformfield_Response::is_s_ezsignformfield_value_Set() const{
    return m_s_ezsignformfield_value_isSet;
}

bool Custom_FormDataEzsignformfield_Response::is_s_ezsignformfield_value_Valid() const{
    return m_s_ezsignformfield_value_isValid;
}

bool Custom_FormDataEzsignformfield_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_ezsignformfield_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignformfield_value_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Custom_FormDataEzsignformfield_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_ezsignformfield_label_isValid && m_s_ezsignformfield_value_isValid && true;
}

} // namespace Ezmaxapi
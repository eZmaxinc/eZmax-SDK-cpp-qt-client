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

#include "Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload::Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload::Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload::~Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload() {}

void Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_ezmaxinvoicing_isSet = false;
    m_a_obj_ezmaxinvoicing_isValid = false;
}

void Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezmaxinvoicing_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezmaxinvoicing, json[QString("a_objEzmaxinvoicing")]);
    m_a_obj_ezmaxinvoicing_isSet = !json[QString("a_objEzmaxinvoicing")].isNull() && m_a_obj_ezmaxinvoicing_isValid;
}

QString Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezmaxinvoicing.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicing"), ::Ezmaxapi::toJsonValue(m_a_obj_ezmaxinvoicing));
    }
    return obj;
}

QList<Ezmaxinvoicing_AutocompleteElement_Response> Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload::getAObjEzmaxinvoicing() const {
    return m_a_obj_ezmaxinvoicing;
}
void Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload::setAObjEzmaxinvoicing(const QList<Ezmaxinvoicing_AutocompleteElement_Response> &a_obj_ezmaxinvoicing) {
    m_a_obj_ezmaxinvoicing = a_obj_ezmaxinvoicing;
    m_a_obj_ezmaxinvoicing_isSet = true;
}

bool Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload::is_a_obj_ezmaxinvoicing_Set() const{
    return m_a_obj_ezmaxinvoicing_isSet;
}

bool Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload::is_a_obj_ezmaxinvoicing_Valid() const{
    return m_a_obj_ezmaxinvoicing_isValid;
}

bool Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezmaxinvoicing.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezmaxinvoicing_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezmaxinvoicing_isValid && true;
}

} // namespace Ezmaxapi

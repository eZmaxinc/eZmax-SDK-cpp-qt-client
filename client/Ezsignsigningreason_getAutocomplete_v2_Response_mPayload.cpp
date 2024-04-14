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

#include "Ezsignsigningreason_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignsigningreason_getAutocomplete_v2_Response_mPayload::Ezsignsigningreason_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignsigningreason_getAutocomplete_v2_Response_mPayload::Ezsignsigningreason_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Ezsignsigningreason_getAutocomplete_v2_Response_mPayload::~Ezsignsigningreason_getAutocomplete_v2_Response_mPayload() {}

void Ezsignsigningreason_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_ezsignsigningreason_isSet = false;
    m_a_obj_ezsignsigningreason_isValid = false;
}

void Ezsignsigningreason_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignsigningreason_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignsigningreason_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignsigningreason, json[QString("a_objEzsignsigningreason")]);
    m_a_obj_ezsignsigningreason_isSet = !json[QString("a_objEzsignsigningreason")].isNull() && m_a_obj_ezsignsigningreason_isValid;
}

QString Ezsignsigningreason_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignsigningreason_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsignsigningreason.size() > 0) {
        obj.insert(QString("a_objEzsignsigningreason"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignsigningreason));
    }
    return obj;
}

QList<Ezsignsigningreason_AutocompleteElement_Response> Ezsignsigningreason_getAutocomplete_v2_Response_mPayload::getAObjEzsignsigningreason() const {
    return m_a_obj_ezsignsigningreason;
}
void Ezsignsigningreason_getAutocomplete_v2_Response_mPayload::setAObjEzsignsigningreason(const QList<Ezsignsigningreason_AutocompleteElement_Response> &a_obj_ezsignsigningreason) {
    m_a_obj_ezsignsigningreason = a_obj_ezsignsigningreason;
    m_a_obj_ezsignsigningreason_isSet = true;
}

bool Ezsignsigningreason_getAutocomplete_v2_Response_mPayload::is_a_obj_ezsignsigningreason_Set() const{
    return m_a_obj_ezsignsigningreason_isSet;
}

bool Ezsignsigningreason_getAutocomplete_v2_Response_mPayload::is_a_obj_ezsignsigningreason_Valid() const{
    return m_a_obj_ezsignsigningreason_isValid;
}

bool Ezsignsigningreason_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsignsigningreason.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignsigningreason_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignsigningreason_isValid && true;
}

} // namespace Ezmaxapi
/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIBranding_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBranding_getAutocomplete_v2_Response_mPayload::OAIBranding_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBranding_getAutocomplete_v2_Response_mPayload::OAIBranding_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

OAIBranding_getAutocomplete_v2_Response_mPayload::~OAIBranding_getAutocomplete_v2_Response_mPayload() {}

void OAIBranding_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_branding_isSet = false;
    m_a_obj_branding_isValid = false;
}

void OAIBranding_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBranding_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_branding_isValid = ::OpenAPI::fromJsonValue(a_obj_branding, json[QString("a_objBranding")]);
    m_a_obj_branding_isSet = !json[QString("a_objBranding")].isNull() && m_a_obj_branding_isValid;
}

QString OAIBranding_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBranding_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_branding.size() > 0) {
        obj.insert(QString("a_objBranding"), ::OpenAPI::toJsonValue(a_obj_branding));
    }
    return obj;
}

QList<OAIBranding_AutocompleteElement_Response> OAIBranding_getAutocomplete_v2_Response_mPayload::getAObjBranding() const {
    return a_obj_branding;
}
void OAIBranding_getAutocomplete_v2_Response_mPayload::setAObjBranding(const QList<OAIBranding_AutocompleteElement_Response> &a_obj_branding) {
    this->a_obj_branding = a_obj_branding;
    this->m_a_obj_branding_isSet = true;
}

bool OAIBranding_getAutocomplete_v2_Response_mPayload::is_a_obj_branding_Set() const{
    return m_a_obj_branding_isSet;
}

bool OAIBranding_getAutocomplete_v2_Response_mPayload::is_a_obj_branding_Valid() const{
    return m_a_obj_branding_isValid;
}

bool OAIBranding_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_branding.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBranding_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_branding_isValid && true;
}

} // namespace OpenAPI

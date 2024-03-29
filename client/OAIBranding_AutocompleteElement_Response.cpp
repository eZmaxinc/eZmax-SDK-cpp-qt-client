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

#include "OAIBranding_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBranding_AutocompleteElement_Response::OAIBranding_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBranding_AutocompleteElement_Response::OAIBranding_AutocompleteElement_Response() {
    this->initializeModel();
}

OAIBranding_AutocompleteElement_Response::~OAIBranding_AutocompleteElement_Response() {}

void OAIBranding_AutocompleteElement_Response::initializeModel() {

    m_s_branding_description_x_isSet = false;
    m_s_branding_description_x_isValid = false;

    m_pki_branding_id_isSet = false;
    m_pki_branding_id_isValid = false;

    m_b_branding_isactive_isSet = false;
    m_b_branding_isactive_isValid = false;
}

void OAIBranding_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBranding_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_s_branding_description_x_isValid = ::OpenAPI::fromJsonValue(s_branding_description_x, json[QString("sBrandingDescriptionX")]);
    m_s_branding_description_x_isSet = !json[QString("sBrandingDescriptionX")].isNull() && m_s_branding_description_x_isValid;

    m_pki_branding_id_isValid = ::OpenAPI::fromJsonValue(pki_branding_id, json[QString("pkiBrandingID")]);
    m_pki_branding_id_isSet = !json[QString("pkiBrandingID")].isNull() && m_pki_branding_id_isValid;

    m_b_branding_isactive_isValid = ::OpenAPI::fromJsonValue(b_branding_isactive, json[QString("bBrandingIsactive")]);
    m_b_branding_isactive_isSet = !json[QString("bBrandingIsactive")].isNull() && m_b_branding_isactive_isValid;
}

QString OAIBranding_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBranding_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_branding_description_x_isSet) {
        obj.insert(QString("sBrandingDescriptionX"), ::OpenAPI::toJsonValue(s_branding_description_x));
    }
    if (m_pki_branding_id_isSet) {
        obj.insert(QString("pkiBrandingID"), ::OpenAPI::toJsonValue(pki_branding_id));
    }
    if (m_b_branding_isactive_isSet) {
        obj.insert(QString("bBrandingIsactive"), ::OpenAPI::toJsonValue(b_branding_isactive));
    }
    return obj;
}

QString OAIBranding_AutocompleteElement_Response::getSBrandingDescriptionX() const {
    return s_branding_description_x;
}
void OAIBranding_AutocompleteElement_Response::setSBrandingDescriptionX(const QString &s_branding_description_x) {
    this->s_branding_description_x = s_branding_description_x;
    this->m_s_branding_description_x_isSet = true;
}

bool OAIBranding_AutocompleteElement_Response::is_s_branding_description_x_Set() const{
    return m_s_branding_description_x_isSet;
}

bool OAIBranding_AutocompleteElement_Response::is_s_branding_description_x_Valid() const{
    return m_s_branding_description_x_isValid;
}

qint32 OAIBranding_AutocompleteElement_Response::getPkiBrandingId() const {
    return pki_branding_id;
}
void OAIBranding_AutocompleteElement_Response::setPkiBrandingId(const qint32 &pki_branding_id) {
    this->pki_branding_id = pki_branding_id;
    this->m_pki_branding_id_isSet = true;
}

bool OAIBranding_AutocompleteElement_Response::is_pki_branding_id_Set() const{
    return m_pki_branding_id_isSet;
}

bool OAIBranding_AutocompleteElement_Response::is_pki_branding_id_Valid() const{
    return m_pki_branding_id_isValid;
}

bool OAIBranding_AutocompleteElement_Response::isBBrandingIsactive() const {
    return b_branding_isactive;
}
void OAIBranding_AutocompleteElement_Response::setBBrandingIsactive(const bool &b_branding_isactive) {
    this->b_branding_isactive = b_branding_isactive;
    this->m_b_branding_isactive_isSet = true;
}

bool OAIBranding_AutocompleteElement_Response::is_b_branding_isactive_Set() const{
    return m_b_branding_isactive_isSet;
}

bool OAIBranding_AutocompleteElement_Response::is_b_branding_isactive_Valid() const{
    return m_b_branding_isactive_isValid;
}

bool OAIBranding_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_branding_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_branding_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_branding_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBranding_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_branding_description_x_isValid && m_pki_branding_id_isValid && m_b_branding_isactive_isValid && true;
}

} // namespace OpenAPI

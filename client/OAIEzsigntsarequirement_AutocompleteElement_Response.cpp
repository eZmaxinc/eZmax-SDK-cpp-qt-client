/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntsarequirement_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntsarequirement_AutocompleteElement_Response::OAIEzsigntsarequirement_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntsarequirement_AutocompleteElement_Response::OAIEzsigntsarequirement_AutocompleteElement_Response() {
    this->initializeModel();
}

OAIEzsigntsarequirement_AutocompleteElement_Response::~OAIEzsigntsarequirement_AutocompleteElement_Response() {}

void OAIEzsigntsarequirement_AutocompleteElement_Response::initializeModel() {

    m_s_ezsigntsarequirement_description_x_isSet = false;
    m_s_ezsigntsarequirement_description_x_isValid = false;

    m_pki_ezsigntsarequirement_id_isSet = false;
    m_pki_ezsigntsarequirement_id_isValid = false;

    m_b_ezsigntsarequirement_isactive_isSet = false;
    m_b_ezsigntsarequirement_isactive_isValid = false;

    m_b_disabled_isSet = false;
    m_b_disabled_isValid = false;
}

void OAIEzsigntsarequirement_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntsarequirement_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_s_ezsigntsarequirement_description_x_isValid = ::OpenAPI::fromJsonValue(s_ezsigntsarequirement_description_x, json[QString("sEzsigntsarequirementDescriptionX")]);
    m_s_ezsigntsarequirement_description_x_isSet = !json[QString("sEzsigntsarequirementDescriptionX")].isNull() && m_s_ezsigntsarequirement_description_x_isValid;

    m_pki_ezsigntsarequirement_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntsarequirement_id, json[QString("pkiEzsigntsarequirementID")]);
    m_pki_ezsigntsarequirement_id_isSet = !json[QString("pkiEzsigntsarequirementID")].isNull() && m_pki_ezsigntsarequirement_id_isValid;

    m_b_ezsigntsarequirement_isactive_isValid = ::OpenAPI::fromJsonValue(b_ezsigntsarequirement_isactive, json[QString("bEzsigntsarequirementIsactive")]);
    m_b_ezsigntsarequirement_isactive_isSet = !json[QString("bEzsigntsarequirementIsactive")].isNull() && m_b_ezsigntsarequirement_isactive_isValid;

    m_b_disabled_isValid = ::OpenAPI::fromJsonValue(b_disabled, json[QString("bDisabled")]);
    m_b_disabled_isSet = !json[QString("bDisabled")].isNull() && m_b_disabled_isValid;
}

QString OAIEzsigntsarequirement_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntsarequirement_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezsigntsarequirement_description_x_isSet) {
        obj.insert(QString("sEzsigntsarequirementDescriptionX"), ::OpenAPI::toJsonValue(s_ezsigntsarequirement_description_x));
    }
    if (m_pki_ezsigntsarequirement_id_isSet) {
        obj.insert(QString("pkiEzsigntsarequirementID"), ::OpenAPI::toJsonValue(pki_ezsigntsarequirement_id));
    }
    if (m_b_ezsigntsarequirement_isactive_isSet) {
        obj.insert(QString("bEzsigntsarequirementIsactive"), ::OpenAPI::toJsonValue(b_ezsigntsarequirement_isactive));
    }
    if (m_b_disabled_isSet) {
        obj.insert(QString("bDisabled"), ::OpenAPI::toJsonValue(b_disabled));
    }
    return obj;
}

QString OAIEzsigntsarequirement_AutocompleteElement_Response::getSEzsigntsarequirementDescriptionX() const {
    return s_ezsigntsarequirement_description_x;
}
void OAIEzsigntsarequirement_AutocompleteElement_Response::setSEzsigntsarequirementDescriptionX(const QString &s_ezsigntsarequirement_description_x) {
    this->s_ezsigntsarequirement_description_x = s_ezsigntsarequirement_description_x;
    this->m_s_ezsigntsarequirement_description_x_isSet = true;
}

bool OAIEzsigntsarequirement_AutocompleteElement_Response::is_s_ezsigntsarequirement_description_x_Set() const{
    return m_s_ezsigntsarequirement_description_x_isSet;
}

bool OAIEzsigntsarequirement_AutocompleteElement_Response::is_s_ezsigntsarequirement_description_x_Valid() const{
    return m_s_ezsigntsarequirement_description_x_isValid;
}

qint32 OAIEzsigntsarequirement_AutocompleteElement_Response::getPkiEzsigntsarequirementId() const {
    return pki_ezsigntsarequirement_id;
}
void OAIEzsigntsarequirement_AutocompleteElement_Response::setPkiEzsigntsarequirementId(const qint32 &pki_ezsigntsarequirement_id) {
    this->pki_ezsigntsarequirement_id = pki_ezsigntsarequirement_id;
    this->m_pki_ezsigntsarequirement_id_isSet = true;
}

bool OAIEzsigntsarequirement_AutocompleteElement_Response::is_pki_ezsigntsarequirement_id_Set() const{
    return m_pki_ezsigntsarequirement_id_isSet;
}

bool OAIEzsigntsarequirement_AutocompleteElement_Response::is_pki_ezsigntsarequirement_id_Valid() const{
    return m_pki_ezsigntsarequirement_id_isValid;
}

bool OAIEzsigntsarequirement_AutocompleteElement_Response::isBEzsigntsarequirementIsactive() const {
    return b_ezsigntsarequirement_isactive;
}
void OAIEzsigntsarequirement_AutocompleteElement_Response::setBEzsigntsarequirementIsactive(const bool &b_ezsigntsarequirement_isactive) {
    this->b_ezsigntsarequirement_isactive = b_ezsigntsarequirement_isactive;
    this->m_b_ezsigntsarequirement_isactive_isSet = true;
}

bool OAIEzsigntsarequirement_AutocompleteElement_Response::is_b_ezsigntsarequirement_isactive_Set() const{
    return m_b_ezsigntsarequirement_isactive_isSet;
}

bool OAIEzsigntsarequirement_AutocompleteElement_Response::is_b_ezsigntsarequirement_isactive_Valid() const{
    return m_b_ezsigntsarequirement_isactive_isValid;
}

bool OAIEzsigntsarequirement_AutocompleteElement_Response::isBDisabled() const {
    return b_disabled;
}
void OAIEzsigntsarequirement_AutocompleteElement_Response::setBDisabled(const bool &b_disabled) {
    this->b_disabled = b_disabled;
    this->m_b_disabled_isSet = true;
}

bool OAIEzsigntsarequirement_AutocompleteElement_Response::is_b_disabled_Set() const{
    return m_b_disabled_isSet;
}

bool OAIEzsigntsarequirement_AutocompleteElement_Response::is_b_disabled_Valid() const{
    return m_b_disabled_isValid;
}

bool OAIEzsigntsarequirement_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_ezsigntsarequirement_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_ezsigntsarequirement_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntsarequirement_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_disabled_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntsarequirement_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_ezsigntsarequirement_description_x_isValid && m_pki_ezsigntsarequirement_id_isValid && m_b_ezsigntsarequirement_isactive_isValid && m_b_disabled_isValid && true;
}

} // namespace OpenAPI
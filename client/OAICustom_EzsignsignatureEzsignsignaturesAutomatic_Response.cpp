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

#include "OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response() {
    this->initializeModel();
}

OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::~OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response() {}

void OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::initializeModel() {

    m_pki_ezsignsignature_id_isSet = false;
    m_pki_ezsignsignature_id_isValid = false;

    m_e_ezsignsignature_type_isSet = false;
    m_e_ezsignsignature_type_isValid = false;

    m_i_ezsignpage_pagenumber_isSet = false;
    m_i_ezsignpage_pagenumber_isValid = false;
}

void OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignsignature_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignsignature_id, json[QString("pkiEzsignsignatureID")]);
    m_pki_ezsignsignature_id_isSet = !json[QString("pkiEzsignsignatureID")].isNull() && m_pki_ezsignsignature_id_isValid;

    m_e_ezsignsignature_type_isValid = ::OpenAPI::fromJsonValue(e_ezsignsignature_type, json[QString("eEzsignsignatureType")]);
    m_e_ezsignsignature_type_isSet = !json[QString("eEzsignsignatureType")].isNull() && m_e_ezsignsignature_type_isValid;

    m_i_ezsignpage_pagenumber_isValid = ::OpenAPI::fromJsonValue(i_ezsignpage_pagenumber, json[QString("iEzsignpagePagenumber")]);
    m_i_ezsignpage_pagenumber_isSet = !json[QString("iEzsignpagePagenumber")].isNull() && m_i_ezsignpage_pagenumber_isValid;
}

QString OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignsignature_id_isSet) {
        obj.insert(QString("pkiEzsignsignatureID"), ::OpenAPI::toJsonValue(pki_ezsignsignature_id));
    }
    if (e_ezsignsignature_type.isSet()) {
        obj.insert(QString("eEzsignsignatureType"), ::OpenAPI::toJsonValue(e_ezsignsignature_type));
    }
    if (m_i_ezsignpage_pagenumber_isSet) {
        obj.insert(QString("iEzsignpagePagenumber"), ::OpenAPI::toJsonValue(i_ezsignpage_pagenumber));
    }
    return obj;
}

qint32 OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::getPkiEzsignsignatureId() const {
    return pki_ezsignsignature_id;
}
void OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::setPkiEzsignsignatureId(const qint32 &pki_ezsignsignature_id) {
    this->pki_ezsignsignature_id = pki_ezsignsignature_id;
    this->m_pki_ezsignsignature_id_isSet = true;
}

bool OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::is_pki_ezsignsignature_id_Set() const{
    return m_pki_ezsignsignature_id_isSet;
}

bool OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::is_pki_ezsignsignature_id_Valid() const{
    return m_pki_ezsignsignature_id_isValid;
}

OAIField_eEzsignsignatureType OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::getEEzsignsignatureType() const {
    return e_ezsignsignature_type;
}
void OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::setEEzsignsignatureType(const OAIField_eEzsignsignatureType &e_ezsignsignature_type) {
    this->e_ezsignsignature_type = e_ezsignsignature_type;
    this->m_e_ezsignsignature_type_isSet = true;
}

bool OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::is_e_ezsignsignature_type_Set() const{
    return m_e_ezsignsignature_type_isSet;
}

bool OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::is_e_ezsignsignature_type_Valid() const{
    return m_e_ezsignsignature_type_isValid;
}

qint32 OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::getIEzsignpagePagenumber() const {
    return i_ezsignpage_pagenumber;
}
void OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber) {
    this->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    this->m_i_ezsignpage_pagenumber_isSet = true;
}

bool OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::is_i_ezsignpage_pagenumber_Set() const{
    return m_i_ezsignpage_pagenumber_isSet;
}

bool OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::is_i_ezsignpage_pagenumber_Valid() const{
    return m_i_ezsignpage_pagenumber_isValid;
}

bool OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignsignature_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsignsignature_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignpage_pagenumber_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignsignature_id_isValid && m_e_ezsignsignature_type_isValid && m_i_ezsignpage_pagenumber_isValid && true;
}

} // namespace OpenAPI

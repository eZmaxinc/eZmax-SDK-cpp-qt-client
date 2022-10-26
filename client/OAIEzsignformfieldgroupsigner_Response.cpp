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

#include "OAIEzsignformfieldgroupsigner_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignformfieldgroupsigner_Response::OAIEzsignformfieldgroupsigner_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignformfieldgroupsigner_Response::OAIEzsignformfieldgroupsigner_Response() {
    this->initializeModel();
}

OAIEzsignformfieldgroupsigner_Response::~OAIEzsignformfieldgroupsigner_Response() {}

void OAIEzsignformfieldgroupsigner_Response::initializeModel() {

    m_pki_ezsignformfieldgroupsigner_id_isSet = false;
    m_pki_ezsignformfieldgroupsigner_id_isValid = false;

    m_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_fki_ezsignfoldersignerassociation_id_isValid = false;
}

void OAIEzsignformfieldgroupsigner_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignformfieldgroupsigner_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignformfieldgroupsigner_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignformfieldgroupsigner_id, json[QString("pkiEzsignformfieldgroupsignerID")]);
    m_pki_ezsignformfieldgroupsigner_id_isSet = !json[QString("pkiEzsignformfieldgroupsignerID")].isNull() && m_pki_ezsignformfieldgroupsigner_id_isValid;

    m_fki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldersignerassociation_id, json[QString("fkiEzsignfoldersignerassociationID")]);
    m_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("fkiEzsignfoldersignerassociationID")].isNull() && m_fki_ezsignfoldersignerassociation_id_isValid;
}

QString OAIEzsignformfieldgroupsigner_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignformfieldgroupsigner_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignformfieldgroupsigner_id_isSet) {
        obj.insert(QString("pkiEzsignformfieldgroupsignerID"), ::OpenAPI::toJsonValue(pki_ezsignformfieldgroupsigner_id));
    }
    if (m_fki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("fkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(fki_ezsignfoldersignerassociation_id));
    }
    return obj;
}

qint32 OAIEzsignformfieldgroupsigner_Response::getPkiEzsignformfieldgroupsignerId() const {
    return pki_ezsignformfieldgroupsigner_id;
}
void OAIEzsignformfieldgroupsigner_Response::setPkiEzsignformfieldgroupsignerId(const qint32 &pki_ezsignformfieldgroupsigner_id) {
    this->pki_ezsignformfieldgroupsigner_id = pki_ezsignformfieldgroupsigner_id;
    this->m_pki_ezsignformfieldgroupsigner_id_isSet = true;
}

bool OAIEzsignformfieldgroupsigner_Response::is_pki_ezsignformfieldgroupsigner_id_Set() const{
    return m_pki_ezsignformfieldgroupsigner_id_isSet;
}

bool OAIEzsignformfieldgroupsigner_Response::is_pki_ezsignformfieldgroupsigner_id_Valid() const{
    return m_pki_ezsignformfieldgroupsigner_id_isValid;
}

qint32 OAIEzsignformfieldgroupsigner_Response::getFkiEzsignfoldersignerassociationId() const {
    return fki_ezsignfoldersignerassociation_id;
}
void OAIEzsignformfieldgroupsigner_Response::setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id) {
    this->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    this->m_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAIEzsignformfieldgroupsigner_Response::is_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_fki_ezsignfoldersignerassociation_id_isSet;
}

bool OAIEzsignformfieldgroupsigner_Response::is_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_fki_ezsignfoldersignerassociation_id_isValid;
}

bool OAIEzsignformfieldgroupsigner_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignformfieldgroupsigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignformfieldgroupsigner_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignformfieldgroupsigner_id_isValid && m_fki_ezsignfoldersignerassociation_id_isValid && true;
}

} // namespace OpenAPI

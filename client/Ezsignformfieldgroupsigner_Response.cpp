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

#include "Ezsignformfieldgroupsigner_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignformfieldgroupsigner_Response::Ezsignformfieldgroupsigner_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignformfieldgroupsigner_Response::Ezsignformfieldgroupsigner_Response() {
    this->initializeModel();
}

Ezsignformfieldgroupsigner_Response::~Ezsignformfieldgroupsigner_Response() {}

void Ezsignformfieldgroupsigner_Response::initializeModel() {

    m_pki_ezsignformfieldgroupsigner_id_isSet = false;
    m_pki_ezsignformfieldgroupsigner_id_isValid = false;

    m_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_fki_ezsignfoldersignerassociation_id_isValid = false;
}

void Ezsignformfieldgroupsigner_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignformfieldgroupsigner_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignformfieldgroupsigner_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignformfieldgroupsigner_id, json[QString("pkiEzsignformfieldgroupsignerID")]);
    m_pki_ezsignformfieldgroupsigner_id_isSet = !json[QString("pkiEzsignformfieldgroupsignerID")].isNull() && m_pki_ezsignformfieldgroupsigner_id_isValid;

    m_fki_ezsignfoldersignerassociation_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldersignerassociation_id, json[QString("fkiEzsignfoldersignerassociationID")]);
    m_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("fkiEzsignfoldersignerassociationID")].isNull() && m_fki_ezsignfoldersignerassociation_id_isValid;
}

QString Ezsignformfieldgroupsigner_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignformfieldgroupsigner_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignformfieldgroupsigner_id_isSet) {
        obj.insert(QString("pkiEzsignformfieldgroupsignerID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignformfieldgroupsigner_id));
    }
    if (m_fki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("fkiEzsignfoldersignerassociationID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldersignerassociation_id));
    }
    return obj;
}

qint32 Ezsignformfieldgroupsigner_Response::getPkiEzsignformfieldgroupsignerId() const {
    return m_pki_ezsignformfieldgroupsigner_id;
}
void Ezsignformfieldgroupsigner_Response::setPkiEzsignformfieldgroupsignerId(const qint32 &pki_ezsignformfieldgroupsigner_id) {
    m_pki_ezsignformfieldgroupsigner_id = pki_ezsignformfieldgroupsigner_id;
    m_pki_ezsignformfieldgroupsigner_id_isSet = true;
}

bool Ezsignformfieldgroupsigner_Response::is_pki_ezsignformfieldgroupsigner_id_Set() const{
    return m_pki_ezsignformfieldgroupsigner_id_isSet;
}

bool Ezsignformfieldgroupsigner_Response::is_pki_ezsignformfieldgroupsigner_id_Valid() const{
    return m_pki_ezsignformfieldgroupsigner_id_isValid;
}

qint32 Ezsignformfieldgroupsigner_Response::getFkiEzsignfoldersignerassociationId() const {
    return m_fki_ezsignfoldersignerassociation_id;
}
void Ezsignformfieldgroupsigner_Response::setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id) {
    m_fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    m_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool Ezsignformfieldgroupsigner_Response::is_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_fki_ezsignfoldersignerassociation_id_isSet;
}

bool Ezsignformfieldgroupsigner_Response::is_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_fki_ezsignfoldersignerassociation_id_isValid;
}

bool Ezsignformfieldgroupsigner_Response::isSet() const {
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

bool Ezsignformfieldgroupsigner_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignformfieldgroupsigner_id_isValid && m_fki_ezsignfoldersignerassociation_id_isValid && true;
}

} // namespace Ezmaxapi
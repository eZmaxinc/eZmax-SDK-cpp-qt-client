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

#include "Ezsignsignergroup_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignsignergroup_RequestCompound::Ezsignsignergroup_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignsignergroup_RequestCompound::Ezsignsignergroup_RequestCompound() {
    this->initializeModel();
}

Ezsignsignergroup_RequestCompound::~Ezsignsignergroup_RequestCompound() {}

void Ezsignsignergroup_RequestCompound::initializeModel() {

    m_pki_ezsignsignergroup_id_isSet = false;
    m_pki_ezsignsignergroup_id_isValid = false;

    m_fki_ezsignfolder_id_isSet = false;
    m_fki_ezsignfolder_id_isValid = false;

    m_obj_ezsignsignergroup_description_isSet = false;
    m_obj_ezsignsignergroup_description_isValid = false;
}

void Ezsignsignergroup_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignsignergroup_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignsignergroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignsignergroup_id, json[QString("pkiEzsignsignergroupID")]);
    m_pki_ezsignsignergroup_id_isSet = !json[QString("pkiEzsignsignergroupID")].isNull() && m_pki_ezsignsignergroup_id_isValid;

    m_fki_ezsignfolder_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_obj_ezsignsignergroup_description_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignsignergroup_description, json[QString("objEzsignsignergroupDescription")]);
    m_obj_ezsignsignergroup_description_isSet = !json[QString("objEzsignsignergroupDescription")].isNull() && m_obj_ezsignsignergroup_description_isValid;
}

QString Ezsignsignergroup_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignsignergroup_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignsignergroup_id_isSet) {
        obj.insert(QString("pkiEzsignsignergroupID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignsignergroup_id));
    }
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfolder_id));
    }
    if (m_obj_ezsignsignergroup_description.isSet()) {
        obj.insert(QString("objEzsignsignergroupDescription"), ::Ezmaxapi::toJsonValue(m_obj_ezsignsignergroup_description));
    }
    return obj;
}

qint32 Ezsignsignergroup_RequestCompound::getPkiEzsignsignergroupId() const {
    return m_pki_ezsignsignergroup_id;
}
void Ezsignsignergroup_RequestCompound::setPkiEzsignsignergroupId(const qint32 &pki_ezsignsignergroup_id) {
    m_pki_ezsignsignergroup_id = pki_ezsignsignergroup_id;
    m_pki_ezsignsignergroup_id_isSet = true;
}

bool Ezsignsignergroup_RequestCompound::is_pki_ezsignsignergroup_id_Set() const{
    return m_pki_ezsignsignergroup_id_isSet;
}

bool Ezsignsignergroup_RequestCompound::is_pki_ezsignsignergroup_id_Valid() const{
    return m_pki_ezsignsignergroup_id_isValid;
}

qint32 Ezsignsignergroup_RequestCompound::getFkiEzsignfolderId() const {
    return m_fki_ezsignfolder_id;
}
void Ezsignsignergroup_RequestCompound::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    m_fki_ezsignfolder_id = fki_ezsignfolder_id;
    m_fki_ezsignfolder_id_isSet = true;
}

bool Ezsignsignergroup_RequestCompound::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool Ezsignsignergroup_RequestCompound::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

Multilingual_EzsignsignergroupDescription Ezsignsignergroup_RequestCompound::getObjEzsignsignergroupDescription() const {
    return m_obj_ezsignsignergroup_description;
}
void Ezsignsignergroup_RequestCompound::setObjEzsignsignergroupDescription(const Multilingual_EzsignsignergroupDescription &obj_ezsignsignergroup_description) {
    m_obj_ezsignsignergroup_description = obj_ezsignsignergroup_description;
    m_obj_ezsignsignergroup_description_isSet = true;
}

bool Ezsignsignergroup_RequestCompound::is_obj_ezsignsignergroup_description_Set() const{
    return m_obj_ezsignsignergroup_description_isSet;
}

bool Ezsignsignergroup_RequestCompound::is_obj_ezsignsignergroup_description_Valid() const{
    return m_obj_ezsignsignergroup_description_isValid;
}

bool Ezsignsignergroup_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignsignergroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_ezsignsignergroup_description.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignsignergroup_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfolder_id_isValid && m_obj_ezsignsignergroup_description_isValid && true;
}

} // namespace Ezmaxapi

/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatepackagesigner_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackagesigner_RequestCompound::OAIEzsigntemplatepackagesigner_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackagesigner_RequestCompound::OAIEzsigntemplatepackagesigner_RequestCompound() {
    this->initializeModel();
}

OAIEzsigntemplatepackagesigner_RequestCompound::~OAIEzsigntemplatepackagesigner_RequestCompound() {}

void OAIEzsigntemplatepackagesigner_RequestCompound::initializeModel() {

    m_pki_ezsigntemplatepackagesigner_id_isSet = false;
    m_pki_ezsigntemplatepackagesigner_id_isValid = false;

    m_fki_ezsigntemplatepackage_id_isSet = false;
    m_fki_ezsigntemplatepackage_id_isValid = false;

    m_s_ezsigntemplatepackagesigner_description_isSet = false;
    m_s_ezsigntemplatepackagesigner_description_isValid = false;
}

void OAIEzsigntemplatepackagesigner_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackagesigner_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackagesigner_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatepackagesigner_id, json[QString("pkiEzsigntemplatepackagesignerID")]);
    m_pki_ezsigntemplatepackagesigner_id_isSet = !json[QString("pkiEzsigntemplatepackagesignerID")].isNull() && m_pki_ezsigntemplatepackagesigner_id_isValid;

    m_fki_ezsigntemplatepackage_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_s_ezsigntemplatepackagesigner_description_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatepackagesigner_description, json[QString("sEzsigntemplatepackagesignerDescription")]);
    m_s_ezsigntemplatepackagesigner_description_isSet = !json[QString("sEzsigntemplatepackagesignerDescription")].isNull() && m_s_ezsigntemplatepackagesigner_description_isValid;
}

QString OAIEzsigntemplatepackagesigner_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackagesigner_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackagesigner_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackagesignerID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatepackagesigner_id));
    }
    if (m_fki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackageID"), ::OpenAPI::toJsonValue(fki_ezsigntemplatepackage_id));
    }
    if (m_s_ezsigntemplatepackagesigner_description_isSet) {
        obj.insert(QString("sEzsigntemplatepackagesignerDescription"), ::OpenAPI::toJsonValue(s_ezsigntemplatepackagesigner_description));
    }
    return obj;
}

qint32 OAIEzsigntemplatepackagesigner_RequestCompound::getPkiEzsigntemplatepackagesignerId() const {
    return pki_ezsigntemplatepackagesigner_id;
}
void OAIEzsigntemplatepackagesigner_RequestCompound::setPkiEzsigntemplatepackagesignerId(const qint32 &pki_ezsigntemplatepackagesigner_id) {
    this->pki_ezsigntemplatepackagesigner_id = pki_ezsigntemplatepackagesigner_id;
    this->m_pki_ezsigntemplatepackagesigner_id_isSet = true;
}

bool OAIEzsigntemplatepackagesigner_RequestCompound::is_pki_ezsigntemplatepackagesigner_id_Set() const{
    return m_pki_ezsigntemplatepackagesigner_id_isSet;
}

bool OAIEzsigntemplatepackagesigner_RequestCompound::is_pki_ezsigntemplatepackagesigner_id_Valid() const{
    return m_pki_ezsigntemplatepackagesigner_id_isValid;
}

qint32 OAIEzsigntemplatepackagesigner_RequestCompound::getFkiEzsigntemplatepackageId() const {
    return fki_ezsigntemplatepackage_id;
}
void OAIEzsigntemplatepackagesigner_RequestCompound::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    this->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    this->m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool OAIEzsigntemplatepackagesigner_RequestCompound::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool OAIEzsigntemplatepackagesigner_RequestCompound::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

QString OAIEzsigntemplatepackagesigner_RequestCompound::getSEzsigntemplatepackagesignerDescription() const {
    return s_ezsigntemplatepackagesigner_description;
}
void OAIEzsigntemplatepackagesigner_RequestCompound::setSEzsigntemplatepackagesignerDescription(const QString &s_ezsigntemplatepackagesigner_description) {
    this->s_ezsigntemplatepackagesigner_description = s_ezsigntemplatepackagesigner_description;
    this->m_s_ezsigntemplatepackagesigner_description_isSet = true;
}

bool OAIEzsigntemplatepackagesigner_RequestCompound::is_s_ezsigntemplatepackagesigner_description_Set() const{
    return m_s_ezsigntemplatepackagesigner_description_isSet;
}

bool OAIEzsigntemplatepackagesigner_RequestCompound::is_s_ezsigntemplatepackagesigner_description_Valid() const{
    return m_s_ezsigntemplatepackagesigner_description_isValid;
}

bool OAIEzsigntemplatepackagesigner_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatepackagesigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatepackage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatepackagesigner_description_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackagesigner_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsigntemplatepackage_id_isValid && m_s_ezsigntemplatepackagesigner_description_isValid && true;
}

} // namespace OpenAPI

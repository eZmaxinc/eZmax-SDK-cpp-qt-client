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

#include "OAIEmail_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEmail_RequestCompound::OAIEmail_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEmail_RequestCompound::OAIEmail_RequestCompound() {
    this->initializeModel();
}

OAIEmail_RequestCompound::~OAIEmail_RequestCompound() {}

void OAIEmail_RequestCompound::initializeModel() {

    m_pki_email_id_isSet = false;
    m_pki_email_id_isValid = false;

    m_fki_emailtype_id_isSet = false;
    m_fki_emailtype_id_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;
}

void OAIEmail_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEmail_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_email_id_isValid = ::OpenAPI::fromJsonValue(pki_email_id, json[QString("pkiEmailID")]);
    m_pki_email_id_isSet = !json[QString("pkiEmailID")].isNull() && m_pki_email_id_isValid;

    m_fki_emailtype_id_isValid = ::OpenAPI::fromJsonValue(fki_emailtype_id, json[QString("fkiEmailtypeID")]);
    m_fki_emailtype_id_isSet = !json[QString("fkiEmailtypeID")].isNull() && m_fki_emailtype_id_isValid;

    m_s_email_address_isValid = ::OpenAPI::fromJsonValue(s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;
}

QString OAIEmail_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEmail_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_email_id_isSet) {
        obj.insert(QString("pkiEmailID"), ::OpenAPI::toJsonValue(pki_email_id));
    }
    if (m_fki_emailtype_id_isSet) {
        obj.insert(QString("fkiEmailtypeID"), ::OpenAPI::toJsonValue(fki_emailtype_id));
    }
    if (m_s_email_address_isSet) {
        obj.insert(QString("sEmailAddress"), ::OpenAPI::toJsonValue(s_email_address));
    }
    return obj;
}

qint32 OAIEmail_RequestCompound::getPkiEmailId() const {
    return pki_email_id;
}
void OAIEmail_RequestCompound::setPkiEmailId(const qint32 &pki_email_id) {
    this->pki_email_id = pki_email_id;
    this->m_pki_email_id_isSet = true;
}

bool OAIEmail_RequestCompound::is_pki_email_id_Set() const{
    return m_pki_email_id_isSet;
}

bool OAIEmail_RequestCompound::is_pki_email_id_Valid() const{
    return m_pki_email_id_isValid;
}

qint32 OAIEmail_RequestCompound::getFkiEmailtypeId() const {
    return fki_emailtype_id;
}
void OAIEmail_RequestCompound::setFkiEmailtypeId(const qint32 &fki_emailtype_id) {
    this->fki_emailtype_id = fki_emailtype_id;
    this->m_fki_emailtype_id_isSet = true;
}

bool OAIEmail_RequestCompound::is_fki_emailtype_id_Set() const{
    return m_fki_emailtype_id_isSet;
}

bool OAIEmail_RequestCompound::is_fki_emailtype_id_Valid() const{
    return m_fki_emailtype_id_isValid;
}

QString OAIEmail_RequestCompound::getSEmailAddress() const {
    return s_email_address;
}
void OAIEmail_RequestCompound::setSEmailAddress(const QString &s_email_address) {
    this->s_email_address = s_email_address;
    this->m_s_email_address_isSet = true;
}

bool OAIEmail_RequestCompound::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool OAIEmail_RequestCompound::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

bool OAIEmail_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_email_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_emailtype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_email_address_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEmail_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_emailtype_id_isValid && m_s_email_address_isValid && true;
}

} // namespace OpenAPI

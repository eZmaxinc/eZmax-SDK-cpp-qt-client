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

#include "OAICors_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAICors_RequestCompound::OAICors_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICors_RequestCompound::OAICors_RequestCompound() {
    this->initializeModel();
}

OAICors_RequestCompound::~OAICors_RequestCompound() {}

void OAICors_RequestCompound::initializeModel() {

    m_pki_cors_id_isSet = false;
    m_pki_cors_id_isValid = false;

    m_fki_apikey_id_isSet = false;
    m_fki_apikey_id_isValid = false;

    m_s_cors_entryurl_isSet = false;
    m_s_cors_entryurl_isValid = false;
}

void OAICors_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICors_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_cors_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_cors_id, json[QString("pkiCorsID")]);
    m_pki_cors_id_isSet = !json[QString("pkiCorsID")].isNull() && m_pki_cors_id_isValid;

    m_fki_apikey_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_apikey_id, json[QString("fkiApikeyID")]);
    m_fki_apikey_id_isSet = !json[QString("fkiApikeyID")].isNull() && m_fki_apikey_id_isValid;

    m_s_cors_entryurl_isValid = ::Ezmaxapi::fromJsonValue(m_s_cors_entryurl, json[QString("sCorsEntryurl")]);
    m_s_cors_entryurl_isSet = !json[QString("sCorsEntryurl")].isNull() && m_s_cors_entryurl_isValid;
}

QString OAICors_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICors_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_cors_id_isSet) {
        obj.insert(QString("pkiCorsID"), ::Ezmaxapi::toJsonValue(m_pki_cors_id));
    }
    if (m_fki_apikey_id_isSet) {
        obj.insert(QString("fkiApikeyID"), ::Ezmaxapi::toJsonValue(m_fki_apikey_id));
    }
    if (m_s_cors_entryurl_isSet) {
        obj.insert(QString("sCorsEntryurl"), ::Ezmaxapi::toJsonValue(m_s_cors_entryurl));
    }
    return obj;
}

qint32 OAICors_RequestCompound::getPkiCorsId() const {
    return m_pki_cors_id;
}
void OAICors_RequestCompound::setPkiCorsId(const qint32 &pki_cors_id) {
    m_pki_cors_id = pki_cors_id;
    m_pki_cors_id_isSet = true;
}

bool OAICors_RequestCompound::is_pki_cors_id_Set() const{
    return m_pki_cors_id_isSet;
}

bool OAICors_RequestCompound::is_pki_cors_id_Valid() const{
    return m_pki_cors_id_isValid;
}

qint32 OAICors_RequestCompound::getFkiApikeyId() const {
    return m_fki_apikey_id;
}
void OAICors_RequestCompound::setFkiApikeyId(const qint32 &fki_apikey_id) {
    m_fki_apikey_id = fki_apikey_id;
    m_fki_apikey_id_isSet = true;
}

bool OAICors_RequestCompound::is_fki_apikey_id_Set() const{
    return m_fki_apikey_id_isSet;
}

bool OAICors_RequestCompound::is_fki_apikey_id_Valid() const{
    return m_fki_apikey_id_isValid;
}

QString OAICors_RequestCompound::getSCorsEntryurl() const {
    return m_s_cors_entryurl;
}
void OAICors_RequestCompound::setSCorsEntryurl(const QString &s_cors_entryurl) {
    m_s_cors_entryurl = s_cors_entryurl;
    m_s_cors_entryurl_isSet = true;
}

bool OAICors_RequestCompound::is_s_cors_entryurl_Set() const{
    return m_s_cors_entryurl_isSet;
}

bool OAICors_RequestCompound::is_s_cors_entryurl_Valid() const{
    return m_s_cors_entryurl_isValid;
}

bool OAICors_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_cors_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_apikey_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_cors_entryurl_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICors_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_apikey_id_isValid && m_s_cors_entryurl_isValid && true;
}

} // namespace Ezmaxapi

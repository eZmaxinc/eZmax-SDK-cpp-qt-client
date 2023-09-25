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

#include "Activesession_ResponseCompound_Apikey.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Activesession_ResponseCompound_Apikey::Activesession_ResponseCompound_Apikey(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Activesession_ResponseCompound_Apikey::Activesession_ResponseCompound_Apikey() {
    this->initializeModel();
}

Activesession_ResponseCompound_Apikey::~Activesession_ResponseCompound_Apikey() {}

void Activesession_ResponseCompound_Apikey::initializeModel() {

    m_pki_apikey_id_isSet = false;
    m_pki_apikey_id_isValid = false;

    m_s_apikey_description_x_isSet = false;
    m_s_apikey_description_x_isValid = false;
}

void Activesession_ResponseCompound_Apikey::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Activesession_ResponseCompound_Apikey::fromJsonObject(QJsonObject json) {

    m_pki_apikey_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_apikey_id, json[QString("pkiApikeyID")]);
    m_pki_apikey_id_isSet = !json[QString("pkiApikeyID")].isNull() && m_pki_apikey_id_isValid;

    m_s_apikey_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_apikey_description_x, json[QString("sApikeyDescriptionX")]);
    m_s_apikey_description_x_isSet = !json[QString("sApikeyDescriptionX")].isNull() && m_s_apikey_description_x_isValid;
}

QString Activesession_ResponseCompound_Apikey::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Activesession_ResponseCompound_Apikey::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_apikey_id_isSet) {
        obj.insert(QString("pkiApikeyID"), ::Ezmaxapi::toJsonValue(m_pki_apikey_id));
    }
    if (m_s_apikey_description_x_isSet) {
        obj.insert(QString("sApikeyDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_apikey_description_x));
    }
    return obj;
}

qint32 Activesession_ResponseCompound_Apikey::getPkiApikeyId() const {
    return m_pki_apikey_id;
}
void Activesession_ResponseCompound_Apikey::setPkiApikeyId(const qint32 &pki_apikey_id) {
    m_pki_apikey_id = pki_apikey_id;
    m_pki_apikey_id_isSet = true;
}

bool Activesession_ResponseCompound_Apikey::is_pki_apikey_id_Set() const{
    return m_pki_apikey_id_isSet;
}

bool Activesession_ResponseCompound_Apikey::is_pki_apikey_id_Valid() const{
    return m_pki_apikey_id_isValid;
}

QString Activesession_ResponseCompound_Apikey::getSApikeyDescriptionX() const {
    return m_s_apikey_description_x;
}
void Activesession_ResponseCompound_Apikey::setSApikeyDescriptionX(const QString &s_apikey_description_x) {
    m_s_apikey_description_x = s_apikey_description_x;
    m_s_apikey_description_x_isSet = true;
}

bool Activesession_ResponseCompound_Apikey::is_s_apikey_description_x_Set() const{
    return m_s_apikey_description_x_isSet;
}

bool Activesession_ResponseCompound_Apikey::is_s_apikey_description_x_Valid() const{
    return m_s_apikey_description_x_isValid;
}

bool Activesession_ResponseCompound_Apikey::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_apikey_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_apikey_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Activesession_ResponseCompound_Apikey::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_apikey_id_isValid && m_s_apikey_description_x_isValid && true;
}

} // namespace Ezmaxapi

/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.42
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIApikey_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIApikey_RequestCompound::OAIApikey_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIApikey_RequestCompound::OAIApikey_RequestCompound() {
    this->initializeModel();
}

OAIApikey_RequestCompound::~OAIApikey_RequestCompound() {}

void OAIApikey_RequestCompound::initializeModel() {

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_obj_apikey_description_isSet = false;
    m_obj_apikey_description_isValid = false;
}

void OAIApikey_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIApikey_RequestCompound::fromJsonObject(QJsonObject json) {

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_obj_apikey_description_isValid = ::OpenAPI::fromJsonValue(obj_apikey_description, json[QString("objApikeyDescription")]);
    m_obj_apikey_description_isSet = !json[QString("objApikeyDescription")].isNull() && m_obj_apikey_description_isValid;
}

QString OAIApikey_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIApikey_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(fki_user_id));
    }
    if (obj_apikey_description.isSet()) {
        obj.insert(QString("objApikeyDescription"), ::OpenAPI::toJsonValue(obj_apikey_description));
    }
    return obj;
}

qint32 OAIApikey_RequestCompound::getFkiUserId() const {
    return fki_user_id;
}
void OAIApikey_RequestCompound::setFkiUserId(const qint32 &fki_user_id) {
    this->fki_user_id = fki_user_id;
    this->m_fki_user_id_isSet = true;
}

bool OAIApikey_RequestCompound::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAIApikey_RequestCompound::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

OAIMultilingual_ApikeyDescription OAIApikey_RequestCompound::getObjApikeyDescription() const {
    return obj_apikey_description;
}
void OAIApikey_RequestCompound::setObjApikeyDescription(const OAIMultilingual_ApikeyDescription &obj_apikey_description) {
    this->obj_apikey_description = obj_apikey_description;
    this->m_obj_apikey_description_isSet = true;
}

bool OAIApikey_RequestCompound::is_obj_apikey_description_Set() const{
    return m_obj_apikey_description_isSet;
}

bool OAIApikey_RequestCompound::is_obj_apikey_description_Valid() const{
    return m_obj_apikey_description_isValid;
}

bool OAIApikey_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_apikey_description.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIApikey_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_user_id_isValid && m_obj_apikey_description_isValid && true;
}

} // namespace OpenAPI

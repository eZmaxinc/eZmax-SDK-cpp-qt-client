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

#include "Apikey_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Apikey_Request::Apikey_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Apikey_Request::Apikey_Request() {
    this->initializeModel();
}

Apikey_Request::~Apikey_Request() {}

void Apikey_Request::initializeModel() {

    m_pki_apikey_id_isSet = false;
    m_pki_apikey_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_obj_apikey_description_isSet = false;
    m_obj_apikey_description_isValid = false;

    m_b_apikey_isactive_isSet = false;
    m_b_apikey_isactive_isValid = false;

    m_b_apikey_issigned_isSet = false;
    m_b_apikey_issigned_isValid = false;
}

void Apikey_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Apikey_Request::fromJsonObject(QJsonObject json) {

    m_pki_apikey_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_apikey_id, json[QString("pkiApikeyID")]);
    m_pki_apikey_id_isSet = !json[QString("pkiApikeyID")].isNull() && m_pki_apikey_id_isValid;

    m_fki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_obj_apikey_description_isValid = ::Ezmaxapi::fromJsonValue(m_obj_apikey_description, json[QString("objApikeyDescription")]);
    m_obj_apikey_description_isSet = !json[QString("objApikeyDescription")].isNull() && m_obj_apikey_description_isValid;

    m_b_apikey_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_apikey_isactive, json[QString("bApikeyIsactive")]);
    m_b_apikey_isactive_isSet = !json[QString("bApikeyIsactive")].isNull() && m_b_apikey_isactive_isValid;

    m_b_apikey_issigned_isValid = ::Ezmaxapi::fromJsonValue(m_b_apikey_issigned, json[QString("bApikeyIssigned")]);
    m_b_apikey_issigned_isSet = !json[QString("bApikeyIssigned")].isNull() && m_b_apikey_issigned_isValid;
}

QString Apikey_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Apikey_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_apikey_id_isSet) {
        obj.insert(QString("pkiApikeyID"), ::Ezmaxapi::toJsonValue(m_pki_apikey_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::Ezmaxapi::toJsonValue(m_fki_user_id));
    }
    if (m_obj_apikey_description.isSet()) {
        obj.insert(QString("objApikeyDescription"), ::Ezmaxapi::toJsonValue(m_obj_apikey_description));
    }
    if (m_b_apikey_isactive_isSet) {
        obj.insert(QString("bApikeyIsactive"), ::Ezmaxapi::toJsonValue(m_b_apikey_isactive));
    }
    if (m_b_apikey_issigned_isSet) {
        obj.insert(QString("bApikeyIssigned"), ::Ezmaxapi::toJsonValue(m_b_apikey_issigned));
    }
    return obj;
}

qint32 Apikey_Request::getPkiApikeyId() const {
    return m_pki_apikey_id;
}
void Apikey_Request::setPkiApikeyId(const qint32 &pki_apikey_id) {
    m_pki_apikey_id = pki_apikey_id;
    m_pki_apikey_id_isSet = true;
}

bool Apikey_Request::is_pki_apikey_id_Set() const{
    return m_pki_apikey_id_isSet;
}

bool Apikey_Request::is_pki_apikey_id_Valid() const{
    return m_pki_apikey_id_isValid;
}

qint32 Apikey_Request::getFkiUserId() const {
    return m_fki_user_id;
}
void Apikey_Request::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Apikey_Request::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Apikey_Request::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

Multilingual_ApikeyDescription Apikey_Request::getObjApikeyDescription() const {
    return m_obj_apikey_description;
}
void Apikey_Request::setObjApikeyDescription(const Multilingual_ApikeyDescription &obj_apikey_description) {
    m_obj_apikey_description = obj_apikey_description;
    m_obj_apikey_description_isSet = true;
}

bool Apikey_Request::is_obj_apikey_description_Set() const{
    return m_obj_apikey_description_isSet;
}

bool Apikey_Request::is_obj_apikey_description_Valid() const{
    return m_obj_apikey_description_isValid;
}

bool Apikey_Request::isBApikeyIsactive() const {
    return m_b_apikey_isactive;
}
void Apikey_Request::setBApikeyIsactive(const bool &b_apikey_isactive) {
    m_b_apikey_isactive = b_apikey_isactive;
    m_b_apikey_isactive_isSet = true;
}

bool Apikey_Request::is_b_apikey_isactive_Set() const{
    return m_b_apikey_isactive_isSet;
}

bool Apikey_Request::is_b_apikey_isactive_Valid() const{
    return m_b_apikey_isactive_isValid;
}

bool Apikey_Request::isBApikeyIssigned() const {
    return m_b_apikey_issigned;
}
void Apikey_Request::setBApikeyIssigned(const bool &b_apikey_issigned) {
    m_b_apikey_issigned = b_apikey_issigned;
    m_b_apikey_issigned_isSet = true;
}

bool Apikey_Request::is_b_apikey_issigned_Set() const{
    return m_b_apikey_issigned_isSet;
}

bool Apikey_Request::is_b_apikey_issigned_Valid() const{
    return m_b_apikey_issigned_isValid;
}

bool Apikey_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_apikey_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_apikey_description.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_apikey_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_apikey_issigned_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Apikey_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_user_id_isValid && m_obj_apikey_description_isValid && true;
}

} // namespace Ezmaxapi

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

#include "Apikey_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Apikey_Response::Apikey_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Apikey_Response::Apikey_Response() {
    this->initializeModel();
}

Apikey_Response::~Apikey_Response() {}

void Apikey_Response::initializeModel() {

    m_pki_apikey_id_isSet = false;
    m_pki_apikey_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_obj_apikey_description_isSet = false;
    m_obj_apikey_description_isValid = false;

    m_obj_contact_name_isSet = false;
    m_obj_contact_name_isValid = false;

    m_s_apikey_apikey_isSet = false;
    m_s_apikey_apikey_isValid = false;

    m_s_apikey_secret_isSet = false;
    m_s_apikey_secret_isValid = false;

    m_b_apikey_isactive_isSet = false;
    m_b_apikey_isactive_isValid = false;

    m_b_apikey_issigned_isSet = false;
    m_b_apikey_issigned_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;
}

void Apikey_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Apikey_Response::fromJsonObject(QJsonObject json) {

    m_pki_apikey_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_apikey_id, json[QString("pkiApikeyID")]);
    m_pki_apikey_id_isSet = !json[QString("pkiApikeyID")].isNull() && m_pki_apikey_id_isValid;

    m_fki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_obj_apikey_description_isValid = ::Ezmaxapi::fromJsonValue(m_obj_apikey_description, json[QString("objApikeyDescription")]);
    m_obj_apikey_description_isSet = !json[QString("objApikeyDescription")].isNull() && m_obj_apikey_description_isValid;

    m_obj_contact_name_isValid = ::Ezmaxapi::fromJsonValue(m_obj_contact_name, json[QString("objContactName")]);
    m_obj_contact_name_isSet = !json[QString("objContactName")].isNull() && m_obj_contact_name_isValid;

    m_s_apikey_apikey_isValid = ::Ezmaxapi::fromJsonValue(m_s_apikey_apikey, json[QString("sApikeyApikey")]);
    m_s_apikey_apikey_isSet = !json[QString("sApikeyApikey")].isNull() && m_s_apikey_apikey_isValid;

    m_s_apikey_secret_isValid = ::Ezmaxapi::fromJsonValue(m_s_apikey_secret, json[QString("sApikeySecret")]);
    m_s_apikey_secret_isSet = !json[QString("sApikeySecret")].isNull() && m_s_apikey_secret_isValid;

    m_b_apikey_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_apikey_isactive, json[QString("bApikeyIsactive")]);
    m_b_apikey_isactive_isSet = !json[QString("bApikeyIsactive")].isNull() && m_b_apikey_isactive_isValid;

    m_b_apikey_issigned_isValid = ::Ezmaxapi::fromJsonValue(m_b_apikey_issigned, json[QString("bApikeyIssigned")]);
    m_b_apikey_issigned_isSet = !json[QString("bApikeyIssigned")].isNull() && m_b_apikey_issigned_isValid;

    m_obj_audit_isValid = ::Ezmaxapi::fromJsonValue(m_obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;
}

QString Apikey_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Apikey_Response::asJsonObject() const {
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
    if (m_obj_contact_name.isSet()) {
        obj.insert(QString("objContactName"), ::Ezmaxapi::toJsonValue(m_obj_contact_name));
    }
    if (m_s_apikey_apikey_isSet) {
        obj.insert(QString("sApikeyApikey"), ::Ezmaxapi::toJsonValue(m_s_apikey_apikey));
    }
    if (m_s_apikey_secret_isSet) {
        obj.insert(QString("sApikeySecret"), ::Ezmaxapi::toJsonValue(m_s_apikey_secret));
    }
    if (m_b_apikey_isactive_isSet) {
        obj.insert(QString("bApikeyIsactive"), ::Ezmaxapi::toJsonValue(m_b_apikey_isactive));
    }
    if (m_b_apikey_issigned_isSet) {
        obj.insert(QString("bApikeyIssigned"), ::Ezmaxapi::toJsonValue(m_b_apikey_issigned));
    }
    if (m_obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::Ezmaxapi::toJsonValue(m_obj_audit));
    }
    return obj;
}

qint32 Apikey_Response::getPkiApikeyId() const {
    return m_pki_apikey_id;
}
void Apikey_Response::setPkiApikeyId(const qint32 &pki_apikey_id) {
    m_pki_apikey_id = pki_apikey_id;
    m_pki_apikey_id_isSet = true;
}

bool Apikey_Response::is_pki_apikey_id_Set() const{
    return m_pki_apikey_id_isSet;
}

bool Apikey_Response::is_pki_apikey_id_Valid() const{
    return m_pki_apikey_id_isValid;
}

qint32 Apikey_Response::getFkiUserId() const {
    return m_fki_user_id;
}
void Apikey_Response::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Apikey_Response::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Apikey_Response::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

Multilingual_ApikeyDescription Apikey_Response::getObjApikeyDescription() const {
    return m_obj_apikey_description;
}
void Apikey_Response::setObjApikeyDescription(const Multilingual_ApikeyDescription &obj_apikey_description) {
    m_obj_apikey_description = obj_apikey_description;
    m_obj_apikey_description_isSet = true;
}

bool Apikey_Response::is_obj_apikey_description_Set() const{
    return m_obj_apikey_description_isSet;
}

bool Apikey_Response::is_obj_apikey_description_Valid() const{
    return m_obj_apikey_description_isValid;
}

Custom_ContactName_Response Apikey_Response::getObjContactName() const {
    return m_obj_contact_name;
}
void Apikey_Response::setObjContactName(const Custom_ContactName_Response &obj_contact_name) {
    m_obj_contact_name = obj_contact_name;
    m_obj_contact_name_isSet = true;
}

bool Apikey_Response::is_obj_contact_name_Set() const{
    return m_obj_contact_name_isSet;
}

bool Apikey_Response::is_obj_contact_name_Valid() const{
    return m_obj_contact_name_isValid;
}

QString Apikey_Response::getSApikeyApikey() const {
    return m_s_apikey_apikey;
}
void Apikey_Response::setSApikeyApikey(const QString &s_apikey_apikey) {
    m_s_apikey_apikey = s_apikey_apikey;
    m_s_apikey_apikey_isSet = true;
}

bool Apikey_Response::is_s_apikey_apikey_Set() const{
    return m_s_apikey_apikey_isSet;
}

bool Apikey_Response::is_s_apikey_apikey_Valid() const{
    return m_s_apikey_apikey_isValid;
}

QString Apikey_Response::getSApikeySecret() const {
    return m_s_apikey_secret;
}
void Apikey_Response::setSApikeySecret(const QString &s_apikey_secret) {
    m_s_apikey_secret = s_apikey_secret;
    m_s_apikey_secret_isSet = true;
}

bool Apikey_Response::is_s_apikey_secret_Set() const{
    return m_s_apikey_secret_isSet;
}

bool Apikey_Response::is_s_apikey_secret_Valid() const{
    return m_s_apikey_secret_isValid;
}

bool Apikey_Response::isBApikeyIsactive() const {
    return m_b_apikey_isactive;
}
void Apikey_Response::setBApikeyIsactive(const bool &b_apikey_isactive) {
    m_b_apikey_isactive = b_apikey_isactive;
    m_b_apikey_isactive_isSet = true;
}

bool Apikey_Response::is_b_apikey_isactive_Set() const{
    return m_b_apikey_isactive_isSet;
}

bool Apikey_Response::is_b_apikey_isactive_Valid() const{
    return m_b_apikey_isactive_isValid;
}

bool Apikey_Response::isBApikeyIssigned() const {
    return m_b_apikey_issigned;
}
void Apikey_Response::setBApikeyIssigned(const bool &b_apikey_issigned) {
    m_b_apikey_issigned = b_apikey_issigned;
    m_b_apikey_issigned_isSet = true;
}

bool Apikey_Response::is_b_apikey_issigned_Set() const{
    return m_b_apikey_issigned_isSet;
}

bool Apikey_Response::is_b_apikey_issigned_Valid() const{
    return m_b_apikey_issigned_isValid;
}

Common_Audit Apikey_Response::getObjAudit() const {
    return m_obj_audit;
}
void Apikey_Response::setObjAudit(const Common_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool Apikey_Response::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool Apikey_Response::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool Apikey_Response::isSet() const {
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

        if (m_obj_contact_name.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_apikey_apikey_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_apikey_secret_isSet) {
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

        if (m_obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Apikey_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_apikey_id_isValid && m_fki_user_id_isValid && m_obj_apikey_description_isValid && m_obj_contact_name_isValid && m_b_apikey_isactive_isValid && m_obj_audit_isValid && true;
}

} // namespace Ezmaxapi

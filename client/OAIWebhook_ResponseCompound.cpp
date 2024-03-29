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

#include "OAIWebhook_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhook_ResponseCompound::OAIWebhook_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_ResponseCompound::OAIWebhook_ResponseCompound() {
    this->initializeModel();
}

OAIWebhook_ResponseCompound::~OAIWebhook_ResponseCompound() {}

void OAIWebhook_ResponseCompound::initializeModel() {

    m_pki_webhook_id_isSet = false;
    m_pki_webhook_id_isValid = false;

    m_s_webhook_description_isSet = false;
    m_s_webhook_description_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_e_webhook_module_isSet = false;
    m_e_webhook_module_isValid = false;

    m_e_webhook_ezsignevent_isSet = false;
    m_e_webhook_ezsignevent_isValid = false;

    m_e_webhook_managementevent_isSet = false;
    m_e_webhook_managementevent_isValid = false;

    m_s_webhook_url_isSet = false;
    m_s_webhook_url_isValid = false;

    m_s_webhook_emailfailed_isSet = false;
    m_s_webhook_emailfailed_isValid = false;

    m_b_webhook_isactive_isSet = false;
    m_b_webhook_isactive_isValid = false;

    m_b_webhook_skipsslvalidation_isSet = false;
    m_b_webhook_skipsslvalidation_isValid = false;

    m_s_webhook_event_isSet = false;
    m_s_webhook_event_isValid = false;
}

void OAIWebhook_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_webhook_id_isValid = ::OpenAPI::fromJsonValue(pki_webhook_id, json[QString("pkiWebhookID")]);
    m_pki_webhook_id_isSet = !json[QString("pkiWebhookID")].isNull() && m_pki_webhook_id_isValid;

    m_s_webhook_description_isValid = ::OpenAPI::fromJsonValue(s_webhook_description, json[QString("sWebhookDescription")]);
    m_s_webhook_description_isSet = !json[QString("sWebhookDescription")].isNull() && m_s_webhook_description_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::OpenAPI::fromJsonValue(s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_e_webhook_module_isValid = ::OpenAPI::fromJsonValue(e_webhook_module, json[QString("eWebhookModule")]);
    m_e_webhook_module_isSet = !json[QString("eWebhookModule")].isNull() && m_e_webhook_module_isValid;

    m_e_webhook_ezsignevent_isValid = ::OpenAPI::fromJsonValue(e_webhook_ezsignevent, json[QString("eWebhookEzsignevent")]);
    m_e_webhook_ezsignevent_isSet = !json[QString("eWebhookEzsignevent")].isNull() && m_e_webhook_ezsignevent_isValid;

    m_e_webhook_managementevent_isValid = ::OpenAPI::fromJsonValue(e_webhook_managementevent, json[QString("eWebhookManagementevent")]);
    m_e_webhook_managementevent_isSet = !json[QString("eWebhookManagementevent")].isNull() && m_e_webhook_managementevent_isValid;

    m_s_webhook_url_isValid = ::OpenAPI::fromJsonValue(s_webhook_url, json[QString("sWebhookUrl")]);
    m_s_webhook_url_isSet = !json[QString("sWebhookUrl")].isNull() && m_s_webhook_url_isValid;

    m_s_webhook_emailfailed_isValid = ::OpenAPI::fromJsonValue(s_webhook_emailfailed, json[QString("sWebhookEmailfailed")]);
    m_s_webhook_emailfailed_isSet = !json[QString("sWebhookEmailfailed")].isNull() && m_s_webhook_emailfailed_isValid;

    m_b_webhook_isactive_isValid = ::OpenAPI::fromJsonValue(b_webhook_isactive, json[QString("bWebhookIsactive")]);
    m_b_webhook_isactive_isSet = !json[QString("bWebhookIsactive")].isNull() && m_b_webhook_isactive_isValid;

    m_b_webhook_skipsslvalidation_isValid = ::OpenAPI::fromJsonValue(b_webhook_skipsslvalidation, json[QString("bWebhookSkipsslvalidation")]);
    m_b_webhook_skipsslvalidation_isSet = !json[QString("bWebhookSkipsslvalidation")].isNull() && m_b_webhook_skipsslvalidation_isValid;

    m_s_webhook_event_isValid = ::OpenAPI::fromJsonValue(s_webhook_event, json[QString("sWebhookEvent")]);
    m_s_webhook_event_isSet = !json[QString("sWebhookEvent")].isNull() && m_s_webhook_event_isValid;
}

QString OAIWebhook_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_webhook_id_isSet) {
        obj.insert(QString("pkiWebhookID"), ::OpenAPI::toJsonValue(pki_webhook_id));
    }
    if (m_s_webhook_description_isSet) {
        obj.insert(QString("sWebhookDescription"), ::OpenAPI::toJsonValue(s_webhook_description));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::OpenAPI::toJsonValue(s_ezsignfoldertype_name_x));
    }
    if (e_webhook_module.isSet()) {
        obj.insert(QString("eWebhookModule"), ::OpenAPI::toJsonValue(e_webhook_module));
    }
    if (e_webhook_ezsignevent.isSet()) {
        obj.insert(QString("eWebhookEzsignevent"), ::OpenAPI::toJsonValue(e_webhook_ezsignevent));
    }
    if (e_webhook_managementevent.isSet()) {
        obj.insert(QString("eWebhookManagementevent"), ::OpenAPI::toJsonValue(e_webhook_managementevent));
    }
    if (m_s_webhook_url_isSet) {
        obj.insert(QString("sWebhookUrl"), ::OpenAPI::toJsonValue(s_webhook_url));
    }
    if (m_s_webhook_emailfailed_isSet) {
        obj.insert(QString("sWebhookEmailfailed"), ::OpenAPI::toJsonValue(s_webhook_emailfailed));
    }
    if (m_b_webhook_isactive_isSet) {
        obj.insert(QString("bWebhookIsactive"), ::OpenAPI::toJsonValue(b_webhook_isactive));
    }
    if (m_b_webhook_skipsslvalidation_isSet) {
        obj.insert(QString("bWebhookSkipsslvalidation"), ::OpenAPI::toJsonValue(b_webhook_skipsslvalidation));
    }
    if (m_s_webhook_event_isSet) {
        obj.insert(QString("sWebhookEvent"), ::OpenAPI::toJsonValue(s_webhook_event));
    }
    return obj;
}

qint32 OAIWebhook_ResponseCompound::getPkiWebhookId() const {
    return pki_webhook_id;
}
void OAIWebhook_ResponseCompound::setPkiWebhookId(const qint32 &pki_webhook_id) {
    this->pki_webhook_id = pki_webhook_id;
    this->m_pki_webhook_id_isSet = true;
}

bool OAIWebhook_ResponseCompound::is_pki_webhook_id_Set() const{
    return m_pki_webhook_id_isSet;
}

bool OAIWebhook_ResponseCompound::is_pki_webhook_id_Valid() const{
    return m_pki_webhook_id_isValid;
}

QString OAIWebhook_ResponseCompound::getSWebhookDescription() const {
    return s_webhook_description;
}
void OAIWebhook_ResponseCompound::setSWebhookDescription(const QString &s_webhook_description) {
    this->s_webhook_description = s_webhook_description;
    this->m_s_webhook_description_isSet = true;
}

bool OAIWebhook_ResponseCompound::is_s_webhook_description_Set() const{
    return m_s_webhook_description_isSet;
}

bool OAIWebhook_ResponseCompound::is_s_webhook_description_Valid() const{
    return m_s_webhook_description_isValid;
}

qint32 OAIWebhook_ResponseCompound::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIWebhook_ResponseCompound::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIWebhook_ResponseCompound::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIWebhook_ResponseCompound::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

QString OAIWebhook_ResponseCompound::getSEzsignfoldertypeNameX() const {
    return s_ezsignfoldertype_name_x;
}
void OAIWebhook_ResponseCompound::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    this->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    this->m_s_ezsignfoldertype_name_x_isSet = true;
}

bool OAIWebhook_ResponseCompound::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool OAIWebhook_ResponseCompound::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

OAIField_eWebhookModule OAIWebhook_ResponseCompound::getEWebhookModule() const {
    return e_webhook_module;
}
void OAIWebhook_ResponseCompound::setEWebhookModule(const OAIField_eWebhookModule &e_webhook_module) {
    this->e_webhook_module = e_webhook_module;
    this->m_e_webhook_module_isSet = true;
}

bool OAIWebhook_ResponseCompound::is_e_webhook_module_Set() const{
    return m_e_webhook_module_isSet;
}

bool OAIWebhook_ResponseCompound::is_e_webhook_module_Valid() const{
    return m_e_webhook_module_isValid;
}

OAIField_eWebhookEzsignevent OAIWebhook_ResponseCompound::getEWebhookEzsignevent() const {
    return e_webhook_ezsignevent;
}
void OAIWebhook_ResponseCompound::setEWebhookEzsignevent(const OAIField_eWebhookEzsignevent &e_webhook_ezsignevent) {
    this->e_webhook_ezsignevent = e_webhook_ezsignevent;
    this->m_e_webhook_ezsignevent_isSet = true;
}

bool OAIWebhook_ResponseCompound::is_e_webhook_ezsignevent_Set() const{
    return m_e_webhook_ezsignevent_isSet;
}

bool OAIWebhook_ResponseCompound::is_e_webhook_ezsignevent_Valid() const{
    return m_e_webhook_ezsignevent_isValid;
}

OAIField_eWebhookManagementevent OAIWebhook_ResponseCompound::getEWebhookManagementevent() const {
    return e_webhook_managementevent;
}
void OAIWebhook_ResponseCompound::setEWebhookManagementevent(const OAIField_eWebhookManagementevent &e_webhook_managementevent) {
    this->e_webhook_managementevent = e_webhook_managementevent;
    this->m_e_webhook_managementevent_isSet = true;
}

bool OAIWebhook_ResponseCompound::is_e_webhook_managementevent_Set() const{
    return m_e_webhook_managementevent_isSet;
}

bool OAIWebhook_ResponseCompound::is_e_webhook_managementevent_Valid() const{
    return m_e_webhook_managementevent_isValid;
}

QString OAIWebhook_ResponseCompound::getSWebhookUrl() const {
    return s_webhook_url;
}
void OAIWebhook_ResponseCompound::setSWebhookUrl(const QString &s_webhook_url) {
    this->s_webhook_url = s_webhook_url;
    this->m_s_webhook_url_isSet = true;
}

bool OAIWebhook_ResponseCompound::is_s_webhook_url_Set() const{
    return m_s_webhook_url_isSet;
}

bool OAIWebhook_ResponseCompound::is_s_webhook_url_Valid() const{
    return m_s_webhook_url_isValid;
}

QString OAIWebhook_ResponseCompound::getSWebhookEmailfailed() const {
    return s_webhook_emailfailed;
}
void OAIWebhook_ResponseCompound::setSWebhookEmailfailed(const QString &s_webhook_emailfailed) {
    this->s_webhook_emailfailed = s_webhook_emailfailed;
    this->m_s_webhook_emailfailed_isSet = true;
}

bool OAIWebhook_ResponseCompound::is_s_webhook_emailfailed_Set() const{
    return m_s_webhook_emailfailed_isSet;
}

bool OAIWebhook_ResponseCompound::is_s_webhook_emailfailed_Valid() const{
    return m_s_webhook_emailfailed_isValid;
}

bool OAIWebhook_ResponseCompound::isBWebhookIsactive() const {
    return b_webhook_isactive;
}
void OAIWebhook_ResponseCompound::setBWebhookIsactive(const bool &b_webhook_isactive) {
    this->b_webhook_isactive = b_webhook_isactive;
    this->m_b_webhook_isactive_isSet = true;
}

bool OAIWebhook_ResponseCompound::is_b_webhook_isactive_Set() const{
    return m_b_webhook_isactive_isSet;
}

bool OAIWebhook_ResponseCompound::is_b_webhook_isactive_Valid() const{
    return m_b_webhook_isactive_isValid;
}

bool OAIWebhook_ResponseCompound::isBWebhookSkipsslvalidation() const {
    return b_webhook_skipsslvalidation;
}
void OAIWebhook_ResponseCompound::setBWebhookSkipsslvalidation(const bool &b_webhook_skipsslvalidation) {
    this->b_webhook_skipsslvalidation = b_webhook_skipsslvalidation;
    this->m_b_webhook_skipsslvalidation_isSet = true;
}

bool OAIWebhook_ResponseCompound::is_b_webhook_skipsslvalidation_Set() const{
    return m_b_webhook_skipsslvalidation_isSet;
}

bool OAIWebhook_ResponseCompound::is_b_webhook_skipsslvalidation_Valid() const{
    return m_b_webhook_skipsslvalidation_isValid;
}

QString OAIWebhook_ResponseCompound::getSWebhookEvent() const {
    return s_webhook_event;
}
void OAIWebhook_ResponseCompound::setSWebhookEvent(const QString &s_webhook_event) {
    this->s_webhook_event = s_webhook_event;
    this->m_s_webhook_event_isSet = true;
}

bool OAIWebhook_ResponseCompound::is_s_webhook_event_Set() const{
    return m_s_webhook_event_isSet;
}

bool OAIWebhook_ResponseCompound::is_s_webhook_event_Valid() const{
    return m_s_webhook_event_isValid;
}

bool OAIWebhook_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_webhook_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_webhook_module.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (e_webhook_ezsignevent.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (e_webhook_managementevent.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_emailfailed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_webhook_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_webhook_skipsslvalidation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_event_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhook_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_webhook_id_isValid && m_s_webhook_description_isValid && m_e_webhook_module_isValid && m_s_webhook_url_isValid && m_s_webhook_emailfailed_isValid && m_b_webhook_skipsslvalidation_isValid && m_s_webhook_event_isValid && true;
}

} // namespace OpenAPI

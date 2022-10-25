/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAINotificationtest_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAINotificationtest_Response::OAINotificationtest_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAINotificationtest_Response::OAINotificationtest_Response() {
    this->initializeModel();
}

OAINotificationtest_Response::~OAINotificationtest_Response() {}

void OAINotificationtest_Response::initializeModel() {

    m_pki_notificationtest_id_isSet = false;
    m_pki_notificationtest_id_isValid = false;

    m_obj_notificationtest_name_isSet = false;
    m_obj_notificationtest_name_isValid = false;

    m_fki_notificationsubsection_id_isSet = false;
    m_fki_notificationsubsection_id_isValid = false;

    m_s_notificationtest_function_isSet = false;
    m_s_notificationtest_function_isValid = false;

    m_s_notificationtest_name_x_isSet = false;
    m_s_notificationtest_name_x_isValid = false;
}

void OAINotificationtest_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAINotificationtest_Response::fromJsonObject(QJsonObject json) {

    m_pki_notificationtest_id_isValid = ::OpenAPI::fromJsonValue(pki_notificationtest_id, json[QString("pkiNotificationtestID")]);
    m_pki_notificationtest_id_isSet = !json[QString("pkiNotificationtestID")].isNull() && m_pki_notificationtest_id_isValid;

    m_obj_notificationtest_name_isValid = ::OpenAPI::fromJsonValue(obj_notificationtest_name, json[QString("objNotificationtestName")]);
    m_obj_notificationtest_name_isSet = !json[QString("objNotificationtestName")].isNull() && m_obj_notificationtest_name_isValid;

    m_fki_notificationsubsection_id_isValid = ::OpenAPI::fromJsonValue(fki_notificationsubsection_id, json[QString("fkiNotificationsubsectionID")]);
    m_fki_notificationsubsection_id_isSet = !json[QString("fkiNotificationsubsectionID")].isNull() && m_fki_notificationsubsection_id_isValid;

    m_s_notificationtest_function_isValid = ::OpenAPI::fromJsonValue(s_notificationtest_function, json[QString("sNotificationtestFunction")]);
    m_s_notificationtest_function_isSet = !json[QString("sNotificationtestFunction")].isNull() && m_s_notificationtest_function_isValid;

    m_s_notificationtest_name_x_isValid = ::OpenAPI::fromJsonValue(s_notificationtest_name_x, json[QString("sNotificationtestNameX")]);
    m_s_notificationtest_name_x_isSet = !json[QString("sNotificationtestNameX")].isNull() && m_s_notificationtest_name_x_isValid;
}

QString OAINotificationtest_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAINotificationtest_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_notificationtest_id_isSet) {
        obj.insert(QString("pkiNotificationtestID"), ::OpenAPI::toJsonValue(pki_notificationtest_id));
    }
    if (obj_notificationtest_name.isSet()) {
        obj.insert(QString("objNotificationtestName"), ::OpenAPI::toJsonValue(obj_notificationtest_name));
    }
    if (m_fki_notificationsubsection_id_isSet) {
        obj.insert(QString("fkiNotificationsubsectionID"), ::OpenAPI::toJsonValue(fki_notificationsubsection_id));
    }
    if (m_s_notificationtest_function_isSet) {
        obj.insert(QString("sNotificationtestFunction"), ::OpenAPI::toJsonValue(s_notificationtest_function));
    }
    if (m_s_notificationtest_name_x_isSet) {
        obj.insert(QString("sNotificationtestNameX"), ::OpenAPI::toJsonValue(s_notificationtest_name_x));
    }
    return obj;
}

qint32 OAINotificationtest_Response::getPkiNotificationtestId() const {
    return pki_notificationtest_id;
}
void OAINotificationtest_Response::setPkiNotificationtestId(const qint32 &pki_notificationtest_id) {
    this->pki_notificationtest_id = pki_notificationtest_id;
    this->m_pki_notificationtest_id_isSet = true;
}

bool OAINotificationtest_Response::is_pki_notificationtest_id_Set() const{
    return m_pki_notificationtest_id_isSet;
}

bool OAINotificationtest_Response::is_pki_notificationtest_id_Valid() const{
    return m_pki_notificationtest_id_isValid;
}

OAIMultilingual_NotificationtestName OAINotificationtest_Response::getObjNotificationtestName() const {
    return obj_notificationtest_name;
}
void OAINotificationtest_Response::setObjNotificationtestName(const OAIMultilingual_NotificationtestName &obj_notificationtest_name) {
    this->obj_notificationtest_name = obj_notificationtest_name;
    this->m_obj_notificationtest_name_isSet = true;
}

bool OAINotificationtest_Response::is_obj_notificationtest_name_Set() const{
    return m_obj_notificationtest_name_isSet;
}

bool OAINotificationtest_Response::is_obj_notificationtest_name_Valid() const{
    return m_obj_notificationtest_name_isValid;
}

qint32 OAINotificationtest_Response::getFkiNotificationsubsectionId() const {
    return fki_notificationsubsection_id;
}
void OAINotificationtest_Response::setFkiNotificationsubsectionId(const qint32 &fki_notificationsubsection_id) {
    this->fki_notificationsubsection_id = fki_notificationsubsection_id;
    this->m_fki_notificationsubsection_id_isSet = true;
}

bool OAINotificationtest_Response::is_fki_notificationsubsection_id_Set() const{
    return m_fki_notificationsubsection_id_isSet;
}

bool OAINotificationtest_Response::is_fki_notificationsubsection_id_Valid() const{
    return m_fki_notificationsubsection_id_isValid;
}

QString OAINotificationtest_Response::getSNotificationtestFunction() const {
    return s_notificationtest_function;
}
void OAINotificationtest_Response::setSNotificationtestFunction(const QString &s_notificationtest_function) {
    this->s_notificationtest_function = s_notificationtest_function;
    this->m_s_notificationtest_function_isSet = true;
}

bool OAINotificationtest_Response::is_s_notificationtest_function_Set() const{
    return m_s_notificationtest_function_isSet;
}

bool OAINotificationtest_Response::is_s_notificationtest_function_Valid() const{
    return m_s_notificationtest_function_isValid;
}

QString OAINotificationtest_Response::getSNotificationtestNameX() const {
    return s_notificationtest_name_x;
}
void OAINotificationtest_Response::setSNotificationtestNameX(const QString &s_notificationtest_name_x) {
    this->s_notificationtest_name_x = s_notificationtest_name_x;
    this->m_s_notificationtest_name_x_isSet = true;
}

bool OAINotificationtest_Response::is_s_notificationtest_name_x_Set() const{
    return m_s_notificationtest_name_x_isSet;
}

bool OAINotificationtest_Response::is_s_notificationtest_name_x_Valid() const{
    return m_s_notificationtest_name_x_isValid;
}

bool OAINotificationtest_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_notificationtest_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_notificationtest_name.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_notificationsubsection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_notificationtest_function_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_notificationtest_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAINotificationtest_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_notificationtest_id_isValid && m_obj_notificationtest_name_isValid && m_fki_notificationsubsection_id_isValid && m_s_notificationtest_function_isValid && m_s_notificationtest_name_x_isValid && true;
}

} // namespace OpenAPI
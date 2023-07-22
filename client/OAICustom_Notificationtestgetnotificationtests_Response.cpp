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

#include "OAICustom_Notificationtestgetnotificationtests_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_Notificationtestgetnotificationtests_Response::OAICustom_Notificationtestgetnotificationtests_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_Notificationtestgetnotificationtests_Response::OAICustom_Notificationtestgetnotificationtests_Response() {
    this->initializeModel();
}

OAICustom_Notificationtestgetnotificationtests_Response::~OAICustom_Notificationtestgetnotificationtests_Response() {}

void OAICustom_Notificationtestgetnotificationtests_Response::initializeModel() {

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

    m_e_notificationpreference_status_isSet = false;
    m_e_notificationpreference_status_isValid = false;

    m_i_notificationtest_isSet = false;
    m_i_notificationtest_isValid = false;
}

void OAICustom_Notificationtestgetnotificationtests_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_Notificationtestgetnotificationtests_Response::fromJsonObject(QJsonObject json) {

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

    m_e_notificationpreference_status_isValid = ::OpenAPI::fromJsonValue(e_notificationpreference_status, json[QString("eNotificationpreferenceStatus")]);
    m_e_notificationpreference_status_isSet = !json[QString("eNotificationpreferenceStatus")].isNull() && m_e_notificationpreference_status_isValid;

    m_i_notificationtest_isValid = ::OpenAPI::fromJsonValue(i_notificationtest, json[QString("iNotificationtest")]);
    m_i_notificationtest_isSet = !json[QString("iNotificationtest")].isNull() && m_i_notificationtest_isValid;
}

QString OAICustom_Notificationtestgetnotificationtests_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_Notificationtestgetnotificationtests_Response::asJsonObject() const {
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
    if (e_notificationpreference_status.isSet()) {
        obj.insert(QString("eNotificationpreferenceStatus"), ::OpenAPI::toJsonValue(e_notificationpreference_status));
    }
    if (m_i_notificationtest_isSet) {
        obj.insert(QString("iNotificationtest"), ::OpenAPI::toJsonValue(i_notificationtest));
    }
    return obj;
}

qint32 OAICustom_Notificationtestgetnotificationtests_Response::getPkiNotificationtestId() const {
    return pki_notificationtest_id;
}
void OAICustom_Notificationtestgetnotificationtests_Response::setPkiNotificationtestId(const qint32 &pki_notificationtest_id) {
    this->pki_notificationtest_id = pki_notificationtest_id;
    this->m_pki_notificationtest_id_isSet = true;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::is_pki_notificationtest_id_Set() const{
    return m_pki_notificationtest_id_isSet;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::is_pki_notificationtest_id_Valid() const{
    return m_pki_notificationtest_id_isValid;
}

OAIMultilingual_NotificationtestName OAICustom_Notificationtestgetnotificationtests_Response::getObjNotificationtestName() const {
    return obj_notificationtest_name;
}
void OAICustom_Notificationtestgetnotificationtests_Response::setObjNotificationtestName(const OAIMultilingual_NotificationtestName &obj_notificationtest_name) {
    this->obj_notificationtest_name = obj_notificationtest_name;
    this->m_obj_notificationtest_name_isSet = true;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::is_obj_notificationtest_name_Set() const{
    return m_obj_notificationtest_name_isSet;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::is_obj_notificationtest_name_Valid() const{
    return m_obj_notificationtest_name_isValid;
}

qint32 OAICustom_Notificationtestgetnotificationtests_Response::getFkiNotificationsubsectionId() const {
    return fki_notificationsubsection_id;
}
void OAICustom_Notificationtestgetnotificationtests_Response::setFkiNotificationsubsectionId(const qint32 &fki_notificationsubsection_id) {
    this->fki_notificationsubsection_id = fki_notificationsubsection_id;
    this->m_fki_notificationsubsection_id_isSet = true;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::is_fki_notificationsubsection_id_Set() const{
    return m_fki_notificationsubsection_id_isSet;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::is_fki_notificationsubsection_id_Valid() const{
    return m_fki_notificationsubsection_id_isValid;
}

QString OAICustom_Notificationtestgetnotificationtests_Response::getSNotificationtestFunction() const {
    return s_notificationtest_function;
}
void OAICustom_Notificationtestgetnotificationtests_Response::setSNotificationtestFunction(const QString &s_notificationtest_function) {
    this->s_notificationtest_function = s_notificationtest_function;
    this->m_s_notificationtest_function_isSet = true;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::is_s_notificationtest_function_Set() const{
    return m_s_notificationtest_function_isSet;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::is_s_notificationtest_function_Valid() const{
    return m_s_notificationtest_function_isValid;
}

QString OAICustom_Notificationtestgetnotificationtests_Response::getSNotificationtestNameX() const {
    return s_notificationtest_name_x;
}
void OAICustom_Notificationtestgetnotificationtests_Response::setSNotificationtestNameX(const QString &s_notificationtest_name_x) {
    this->s_notificationtest_name_x = s_notificationtest_name_x;
    this->m_s_notificationtest_name_x_isSet = true;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::is_s_notificationtest_name_x_Set() const{
    return m_s_notificationtest_name_x_isSet;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::is_s_notificationtest_name_x_Valid() const{
    return m_s_notificationtest_name_x_isValid;
}

OAIField_eNotificationpreferenceStatus OAICustom_Notificationtestgetnotificationtests_Response::getENotificationpreferenceStatus() const {
    return e_notificationpreference_status;
}
void OAICustom_Notificationtestgetnotificationtests_Response::setENotificationpreferenceStatus(const OAIField_eNotificationpreferenceStatus &e_notificationpreference_status) {
    this->e_notificationpreference_status = e_notificationpreference_status;
    this->m_e_notificationpreference_status_isSet = true;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::is_e_notificationpreference_status_Set() const{
    return m_e_notificationpreference_status_isSet;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::is_e_notificationpreference_status_Valid() const{
    return m_e_notificationpreference_status_isValid;
}

qint32 OAICustom_Notificationtestgetnotificationtests_Response::getINotificationtest() const {
    return i_notificationtest;
}
void OAICustom_Notificationtestgetnotificationtests_Response::setINotificationtest(const qint32 &i_notificationtest) {
    this->i_notificationtest = i_notificationtest;
    this->m_i_notificationtest_isSet = true;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::is_i_notificationtest_Set() const{
    return m_i_notificationtest_isSet;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::is_i_notificationtest_Valid() const{
    return m_i_notificationtest_isValid;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::isSet() const {
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

        if (e_notificationpreference_status.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_notificationtest_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_Notificationtestgetnotificationtests_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_notificationtest_id_isValid && m_obj_notificationtest_name_isValid && m_fki_notificationsubsection_id_isValid && m_s_notificationtest_function_isValid && m_s_notificationtest_name_x_isValid && m_e_notificationpreference_status_isValid && m_i_notificationtest_isValid && true;
}

} // namespace OpenAPI

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

#include "OAIEzsignfoldertype_RequestCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldertype_RequestCompound_allOf::OAIEzsignfoldertype_RequestCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldertype_RequestCompound_allOf::OAIEzsignfoldertype_RequestCompound_allOf() {
    this->initializeModel();
}

OAIEzsignfoldertype_RequestCompound_allOf::~OAIEzsignfoldertype_RequestCompound_allOf() {}

void OAIEzsignfoldertype_RequestCompound_allOf::initializeModel() {

    m_a_fki_user_id_signed_isSet = false;
    m_a_fki_user_id_signed_isValid = false;

    m_a_fki_user_id_summary_isSet = false;
    m_a_fki_user_id_summary_isValid = false;
}

void OAIEzsignfoldertype_RequestCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldertype_RequestCompound_allOf::fromJsonObject(QJsonObject json) {

    m_a_fki_user_id_signed_isValid = ::OpenAPI::fromJsonValue(a_fki_user_id_signed, json[QString("a_fkiUserIDSigned")]);
    m_a_fki_user_id_signed_isSet = !json[QString("a_fkiUserIDSigned")].isNull() && m_a_fki_user_id_signed_isValid;

    m_a_fki_user_id_summary_isValid = ::OpenAPI::fromJsonValue(a_fki_user_id_summary, json[QString("a_fkiUserIDSummary")]);
    m_a_fki_user_id_summary_isSet = !json[QString("a_fkiUserIDSummary")].isNull() && m_a_fki_user_id_summary_isValid;
}

QString OAIEzsignfoldertype_RequestCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldertype_RequestCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_fki_user_id_signed.size() > 0) {
        obj.insert(QString("a_fkiUserIDSigned"), ::OpenAPI::toJsonValue(a_fki_user_id_signed));
    }
    if (a_fki_user_id_summary.size() > 0) {
        obj.insert(QString("a_fkiUserIDSummary"), ::OpenAPI::toJsonValue(a_fki_user_id_summary));
    }
    return obj;
}

QList<qint32> OAIEzsignfoldertype_RequestCompound_allOf::getAFkiUserIdSigned() const {
    return a_fki_user_id_signed;
}
void OAIEzsignfoldertype_RequestCompound_allOf::setAFkiUserIdSigned(const QList<qint32> &a_fki_user_id_signed) {
    this->a_fki_user_id_signed = a_fki_user_id_signed;
    this->m_a_fki_user_id_signed_isSet = true;
}

bool OAIEzsignfoldertype_RequestCompound_allOf::is_a_fki_user_id_signed_Set() const{
    return m_a_fki_user_id_signed_isSet;
}

bool OAIEzsignfoldertype_RequestCompound_allOf::is_a_fki_user_id_signed_Valid() const{
    return m_a_fki_user_id_signed_isValid;
}

QList<qint32> OAIEzsignfoldertype_RequestCompound_allOf::getAFkiUserIdSummary() const {
    return a_fki_user_id_summary;
}
void OAIEzsignfoldertype_RequestCompound_allOf::setAFkiUserIdSummary(const QList<qint32> &a_fki_user_id_summary) {
    this->a_fki_user_id_summary = a_fki_user_id_summary;
    this->m_a_fki_user_id_summary_isSet = true;
}

bool OAIEzsignfoldertype_RequestCompound_allOf::is_a_fki_user_id_summary_Set() const{
    return m_a_fki_user_id_summary_isSet;
}

bool OAIEzsignfoldertype_RequestCompound_allOf::is_a_fki_user_id_summary_Valid() const{
    return m_a_fki_user_id_summary_isValid;
}

bool OAIEzsignfoldertype_RequestCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_fki_user_id_signed.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_fki_user_id_summary.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldertype_RequestCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI

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

#include "OAICustom_Ezsignfoldersignerassociationmessage_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_Ezsignfoldersignerassociationmessage_Request::OAICustom_Ezsignfoldersignerassociationmessage_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_Ezsignfoldersignerassociationmessage_Request::OAICustom_Ezsignfoldersignerassociationmessage_Request() {
    this->initializeModel();
}

OAICustom_Ezsignfoldersignerassociationmessage_Request::~OAICustom_Ezsignfoldersignerassociationmessage_Request() {}

void OAICustom_Ezsignfoldersignerassociationmessage_Request::initializeModel() {

    m_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_fki_ezsignfoldersignerassociation_id_isValid = false;

    m_t_ezsignfoldersignerassociation_message_isSet = false;
    m_t_ezsignfoldersignerassociation_message_isValid = false;
}

void OAICustom_Ezsignfoldersignerassociationmessage_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_Ezsignfoldersignerassociationmessage_Request::fromJsonObject(QJsonObject json) {

    m_fki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldersignerassociation_id, json[QString("fkiEzsignfoldersignerassociationID")]);
    m_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("fkiEzsignfoldersignerassociationID")].isNull() && m_fki_ezsignfoldersignerassociation_id_isValid;

    m_t_ezsignfoldersignerassociation_message_isValid = ::OpenAPI::fromJsonValue(t_ezsignfoldersignerassociation_message, json[QString("tEzsignfoldersignerassociationMessage")]);
    m_t_ezsignfoldersignerassociation_message_isSet = !json[QString("tEzsignfoldersignerassociationMessage")].isNull() && m_t_ezsignfoldersignerassociation_message_isValid;
}

QString OAICustom_Ezsignfoldersignerassociationmessage_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_Ezsignfoldersignerassociationmessage_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("fkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(fki_ezsignfoldersignerassociation_id));
    }
    if (m_t_ezsignfoldersignerassociation_message_isSet) {
        obj.insert(QString("tEzsignfoldersignerassociationMessage"), ::OpenAPI::toJsonValue(t_ezsignfoldersignerassociation_message));
    }
    return obj;
}

qint32 OAICustom_Ezsignfoldersignerassociationmessage_Request::getFkiEzsignfoldersignerassociationId() const {
    return fki_ezsignfoldersignerassociation_id;
}
void OAICustom_Ezsignfoldersignerassociationmessage_Request::setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id) {
    this->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    this->m_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAICustom_Ezsignfoldersignerassociationmessage_Request::is_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_fki_ezsignfoldersignerassociation_id_isSet;
}

bool OAICustom_Ezsignfoldersignerassociationmessage_Request::is_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_fki_ezsignfoldersignerassociation_id_isValid;
}

QString OAICustom_Ezsignfoldersignerassociationmessage_Request::getTEzsignfoldersignerassociationMessage() const {
    return t_ezsignfoldersignerassociation_message;
}
void OAICustom_Ezsignfoldersignerassociationmessage_Request::setTEzsignfoldersignerassociationMessage(const QString &t_ezsignfoldersignerassociation_message) {
    this->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    this->m_t_ezsignfoldersignerassociation_message_isSet = true;
}

bool OAICustom_Ezsignfoldersignerassociationmessage_Request::is_t_ezsignfoldersignerassociation_message_Set() const{
    return m_t_ezsignfoldersignerassociation_message_isSet;
}

bool OAICustom_Ezsignfoldersignerassociationmessage_Request::is_t_ezsignfoldersignerassociation_message_Valid() const{
    return m_t_ezsignfoldersignerassociation_message_isValid;
}

bool OAICustom_Ezsignfoldersignerassociationmessage_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignfoldersignerassociation_message_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_Ezsignfoldersignerassociationmessage_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfoldersignerassociation_id_isValid && true;
}

} // namespace OpenAPI

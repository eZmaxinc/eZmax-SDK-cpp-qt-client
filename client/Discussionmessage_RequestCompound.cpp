/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Discussionmessage_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Discussionmessage_RequestCompound::Discussionmessage_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Discussionmessage_RequestCompound::Discussionmessage_RequestCompound() {
    this->initializeModel();
}

Discussionmessage_RequestCompound::~Discussionmessage_RequestCompound() {}

void Discussionmessage_RequestCompound::initializeModel() {

    m_pki_discussionmessage_id_isSet = false;
    m_pki_discussionmessage_id_isValid = false;

    m_fki_discussion_id_isSet = false;
    m_fki_discussion_id_isValid = false;

    m_fki_discussionmembership_id_actionrequired_isSet = false;
    m_fki_discussionmembership_id_actionrequired_isValid = false;

    m_t_discussionmessage_content_isSet = false;
    m_t_discussionmessage_content_isValid = false;
}

void Discussionmessage_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Discussionmessage_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_discussionmessage_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_discussionmessage_id, json[QString("pkiDiscussionmessageID")]);
    m_pki_discussionmessage_id_isSet = !json[QString("pkiDiscussionmessageID")].isNull() && m_pki_discussionmessage_id_isValid;

    m_fki_discussion_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_discussion_id, json[QString("fkiDiscussionID")]);
    m_fki_discussion_id_isSet = !json[QString("fkiDiscussionID")].isNull() && m_fki_discussion_id_isValid;

    m_fki_discussionmembership_id_actionrequired_isValid = ::Ezmaxapi::fromJsonValue(m_fki_discussionmembership_id_actionrequired, json[QString("fkiDiscussionmembershipIDActionrequired")]);
    m_fki_discussionmembership_id_actionrequired_isSet = !json[QString("fkiDiscussionmembershipIDActionrequired")].isNull() && m_fki_discussionmembership_id_actionrequired_isValid;

    m_t_discussionmessage_content_isValid = ::Ezmaxapi::fromJsonValue(m_t_discussionmessage_content, json[QString("tDiscussionmessageContent")]);
    m_t_discussionmessage_content_isSet = !json[QString("tDiscussionmessageContent")].isNull() && m_t_discussionmessage_content_isValid;
}

QString Discussionmessage_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Discussionmessage_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_discussionmessage_id_isSet) {
        obj.insert(QString("pkiDiscussionmessageID"), ::Ezmaxapi::toJsonValue(m_pki_discussionmessage_id));
    }
    if (m_fki_discussion_id_isSet) {
        obj.insert(QString("fkiDiscussionID"), ::Ezmaxapi::toJsonValue(m_fki_discussion_id));
    }
    if (m_fki_discussionmembership_id_actionrequired_isSet) {
        obj.insert(QString("fkiDiscussionmembershipIDActionrequired"), ::Ezmaxapi::toJsonValue(m_fki_discussionmembership_id_actionrequired));
    }
    if (m_t_discussionmessage_content_isSet) {
        obj.insert(QString("tDiscussionmessageContent"), ::Ezmaxapi::toJsonValue(m_t_discussionmessage_content));
    }
    return obj;
}

qint32 Discussionmessage_RequestCompound::getPkiDiscussionmessageId() const {
    return m_pki_discussionmessage_id;
}
void Discussionmessage_RequestCompound::setPkiDiscussionmessageId(const qint32 &pki_discussionmessage_id) {
    m_pki_discussionmessage_id = pki_discussionmessage_id;
    m_pki_discussionmessage_id_isSet = true;
}

bool Discussionmessage_RequestCompound::is_pki_discussionmessage_id_Set() const{
    return m_pki_discussionmessage_id_isSet;
}

bool Discussionmessage_RequestCompound::is_pki_discussionmessage_id_Valid() const{
    return m_pki_discussionmessage_id_isValid;
}

qint32 Discussionmessage_RequestCompound::getFkiDiscussionId() const {
    return m_fki_discussion_id;
}
void Discussionmessage_RequestCompound::setFkiDiscussionId(const qint32 &fki_discussion_id) {
    m_fki_discussion_id = fki_discussion_id;
    m_fki_discussion_id_isSet = true;
}

bool Discussionmessage_RequestCompound::is_fki_discussion_id_Set() const{
    return m_fki_discussion_id_isSet;
}

bool Discussionmessage_RequestCompound::is_fki_discussion_id_Valid() const{
    return m_fki_discussion_id_isValid;
}

qint32 Discussionmessage_RequestCompound::getFkiDiscussionmembershipIdActionrequired() const {
    return m_fki_discussionmembership_id_actionrequired;
}
void Discussionmessage_RequestCompound::setFkiDiscussionmembershipIdActionrequired(const qint32 &fki_discussionmembership_id_actionrequired) {
    m_fki_discussionmembership_id_actionrequired = fki_discussionmembership_id_actionrequired;
    m_fki_discussionmembership_id_actionrequired_isSet = true;
}

bool Discussionmessage_RequestCompound::is_fki_discussionmembership_id_actionrequired_Set() const{
    return m_fki_discussionmembership_id_actionrequired_isSet;
}

bool Discussionmessage_RequestCompound::is_fki_discussionmembership_id_actionrequired_Valid() const{
    return m_fki_discussionmembership_id_actionrequired_isValid;
}

QString Discussionmessage_RequestCompound::getTDiscussionmessageContent() const {
    return m_t_discussionmessage_content;
}
void Discussionmessage_RequestCompound::setTDiscussionmessageContent(const QString &t_discussionmessage_content) {
    m_t_discussionmessage_content = t_discussionmessage_content;
    m_t_discussionmessage_content_isSet = true;
}

bool Discussionmessage_RequestCompound::is_t_discussionmessage_content_Set() const{
    return m_t_discussionmessage_content_isSet;
}

bool Discussionmessage_RequestCompound::is_t_discussionmessage_content_Valid() const{
    return m_t_discussionmessage_content_isValid;
}

bool Discussionmessage_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_discussionmessage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_discussion_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_discussionmembership_id_actionrequired_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_discussionmessage_content_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Discussionmessage_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_discussion_id_isValid && m_t_discussionmessage_content_isValid && true;
}

} // namespace Ezmaxapi

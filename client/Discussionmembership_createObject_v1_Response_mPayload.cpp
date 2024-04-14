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

#include "Discussionmembership_createObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Discussionmembership_createObject_v1_Response_mPayload::Discussionmembership_createObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Discussionmembership_createObject_v1_Response_mPayload::Discussionmembership_createObject_v1_Response_mPayload() {
    this->initializeModel();
}

Discussionmembership_createObject_v1_Response_mPayload::~Discussionmembership_createObject_v1_Response_mPayload() {}

void Discussionmembership_createObject_v1_Response_mPayload::initializeModel() {

    m_a_pki_discussionmembership_id_isSet = false;
    m_a_pki_discussionmembership_id_isValid = false;
}

void Discussionmembership_createObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Discussionmembership_createObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_discussionmembership_id_isValid = ::Ezmaxapi::fromJsonValue(m_a_pki_discussionmembership_id, json[QString("a_pkiDiscussionmembershipID")]);
    m_a_pki_discussionmembership_id_isSet = !json[QString("a_pkiDiscussionmembershipID")].isNull() && m_a_pki_discussionmembership_id_isValid;
}

QString Discussionmembership_createObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Discussionmembership_createObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_pki_discussionmembership_id.size() > 0) {
        obj.insert(QString("a_pkiDiscussionmembershipID"), ::Ezmaxapi::toJsonValue(m_a_pki_discussionmembership_id));
    }
    return obj;
}

QList<qint32> Discussionmembership_createObject_v1_Response_mPayload::getAPkiDiscussionmembershipId() const {
    return m_a_pki_discussionmembership_id;
}
void Discussionmembership_createObject_v1_Response_mPayload::setAPkiDiscussionmembershipId(const QList<qint32> &a_pki_discussionmembership_id) {
    m_a_pki_discussionmembership_id = a_pki_discussionmembership_id;
    m_a_pki_discussionmembership_id_isSet = true;
}

bool Discussionmembership_createObject_v1_Response_mPayload::is_a_pki_discussionmembership_id_Set() const{
    return m_a_pki_discussionmembership_id_isSet;
}

bool Discussionmembership_createObject_v1_Response_mPayload::is_a_pki_discussionmembership_id_Valid() const{
    return m_a_pki_discussionmembership_id_isValid;
}

bool Discussionmembership_createObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_pki_discussionmembership_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Discussionmembership_createObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_discussionmembership_id_isValid && true;
}

} // namespace Ezmaxapi
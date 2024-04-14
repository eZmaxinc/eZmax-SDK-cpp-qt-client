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

#include "Discussion_createObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Discussion_createObject_v1_Response_mPayload::Discussion_createObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Discussion_createObject_v1_Response_mPayload::Discussion_createObject_v1_Response_mPayload() {
    this->initializeModel();
}

Discussion_createObject_v1_Response_mPayload::~Discussion_createObject_v1_Response_mPayload() {}

void Discussion_createObject_v1_Response_mPayload::initializeModel() {

    m_a_pki_discussion_id_isSet = false;
    m_a_pki_discussion_id_isValid = false;
}

void Discussion_createObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Discussion_createObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_discussion_id_isValid = ::Ezmaxapi::fromJsonValue(m_a_pki_discussion_id, json[QString("a_pkiDiscussionID")]);
    m_a_pki_discussion_id_isSet = !json[QString("a_pkiDiscussionID")].isNull() && m_a_pki_discussion_id_isValid;
}

QString Discussion_createObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Discussion_createObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_pki_discussion_id.size() > 0) {
        obj.insert(QString("a_pkiDiscussionID"), ::Ezmaxapi::toJsonValue(m_a_pki_discussion_id));
    }
    return obj;
}

QList<qint32> Discussion_createObject_v1_Response_mPayload::getAPkiDiscussionId() const {
    return m_a_pki_discussion_id;
}
void Discussion_createObject_v1_Response_mPayload::setAPkiDiscussionId(const QList<qint32> &a_pki_discussion_id) {
    m_a_pki_discussion_id = a_pki_discussion_id;
    m_a_pki_discussion_id_isSet = true;
}

bool Discussion_createObject_v1_Response_mPayload::is_a_pki_discussion_id_Set() const{
    return m_a_pki_discussion_id_isSet;
}

bool Discussion_createObject_v1_Response_mPayload::is_a_pki_discussion_id_Valid() const{
    return m_a_pki_discussion_id_isValid;
}

bool Discussion_createObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_pki_discussion_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Discussion_createObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_discussion_id_isValid && true;
}

} // namespace Ezmaxapi
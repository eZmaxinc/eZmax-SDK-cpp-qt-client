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

#include "Attachment_getAttachmentlogs_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Attachment_getAttachmentlogs_v1_Response_mPayload::Attachment_getAttachmentlogs_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Attachment_getAttachmentlogs_v1_Response_mPayload::Attachment_getAttachmentlogs_v1_Response_mPayload() {
    this->initializeModel();
}

Attachment_getAttachmentlogs_v1_Response_mPayload::~Attachment_getAttachmentlogs_v1_Response_mPayload() {}

void Attachment_getAttachmentlogs_v1_Response_mPayload::initializeModel() {

    m_a_obj_attachmentlog_isSet = false;
    m_a_obj_attachmentlog_isValid = false;
}

void Attachment_getAttachmentlogs_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Attachment_getAttachmentlogs_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_attachmentlog_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_attachmentlog, json[QString("a_objAttachmentlog")]);
    m_a_obj_attachmentlog_isSet = !json[QString("a_objAttachmentlog")].isNull() && m_a_obj_attachmentlog_isValid;
}

QString Attachment_getAttachmentlogs_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Attachment_getAttachmentlogs_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_attachmentlog.size() > 0) {
        obj.insert(QString("a_objAttachmentlog"), ::Ezmaxapi::toJsonValue(m_a_obj_attachmentlog));
    }
    return obj;
}

QList<Attachmentlog_ResponseCompound> Attachment_getAttachmentlogs_v1_Response_mPayload::getAObjAttachmentlog() const {
    return m_a_obj_attachmentlog;
}
void Attachment_getAttachmentlogs_v1_Response_mPayload::setAObjAttachmentlog(const QList<Attachmentlog_ResponseCompound> &a_obj_attachmentlog) {
    m_a_obj_attachmentlog = a_obj_attachmentlog;
    m_a_obj_attachmentlog_isSet = true;
}

bool Attachment_getAttachmentlogs_v1_Response_mPayload::is_a_obj_attachmentlog_Set() const{
    return m_a_obj_attachmentlog_isSet;
}

bool Attachment_getAttachmentlogs_v1_Response_mPayload::is_a_obj_attachmentlog_Valid() const{
    return m_a_obj_attachmentlog_isValid;
}

bool Attachment_getAttachmentlogs_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_attachmentlog.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Attachment_getAttachmentlogs_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_attachmentlog_isValid && true;
}

} // namespace Ezmaxapi
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

#include "Ezsigndocument_getTemporaryProof_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigndocument_getTemporaryProof_v1_Response_mPayload::Ezsigndocument_getTemporaryProof_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigndocument_getTemporaryProof_v1_Response_mPayload::Ezsigndocument_getTemporaryProof_v1_Response_mPayload() {
    this->initializeModel();
}

Ezsigndocument_getTemporaryProof_v1_Response_mPayload::~Ezsigndocument_getTemporaryProof_v1_Response_mPayload() {}

void Ezsigndocument_getTemporaryProof_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsigndocumentlog_isSet = false;
    m_a_obj_ezsigndocumentlog_isValid = false;
}

void Ezsigndocument_getTemporaryProof_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigndocument_getTemporaryProof_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigndocumentlog_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigndocumentlog, json[QString("a_objEzsigndocumentlog")]);
    m_a_obj_ezsigndocumentlog_isSet = !json[QString("a_objEzsigndocumentlog")].isNull() && m_a_obj_ezsigndocumentlog_isValid;
}

QString Ezsigndocument_getTemporaryProof_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigndocument_getTemporaryProof_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsigndocumentlog.size() > 0) {
        obj.insert(QString("a_objEzsigndocumentlog"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigndocumentlog));
    }
    return obj;
}

QList<Ezsigndocumentlog_ResponseCompound> Ezsigndocument_getTemporaryProof_v1_Response_mPayload::getAObjEzsigndocumentlog() const {
    return m_a_obj_ezsigndocumentlog;
}
void Ezsigndocument_getTemporaryProof_v1_Response_mPayload::setAObjEzsigndocumentlog(const QList<Ezsigndocumentlog_ResponseCompound> &a_obj_ezsigndocumentlog) {
    m_a_obj_ezsigndocumentlog = a_obj_ezsigndocumentlog;
    m_a_obj_ezsigndocumentlog_isSet = true;
}

bool Ezsigndocument_getTemporaryProof_v1_Response_mPayload::is_a_obj_ezsigndocumentlog_Set() const{
    return m_a_obj_ezsigndocumentlog_isSet;
}

bool Ezsigndocument_getTemporaryProof_v1_Response_mPayload::is_a_obj_ezsigndocumentlog_Valid() const{
    return m_a_obj_ezsigndocumentlog_isValid;
}

bool Ezsigndocument_getTemporaryProof_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsigndocumentlog.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigndocument_getTemporaryProof_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigndocumentlog_isValid && true;
}

} // namespace Ezmaxapi

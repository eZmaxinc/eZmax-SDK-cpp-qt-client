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

#include "Ezsigndocument_getFormData_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigndocument_getFormData_v1_Response_mPayload::Ezsigndocument_getFormData_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigndocument_getFormData_v1_Response_mPayload::Ezsigndocument_getFormData_v1_Response_mPayload() {
    this->initializeModel();
}

Ezsigndocument_getFormData_v1_Response_mPayload::~Ezsigndocument_getFormData_v1_Response_mPayload() {}

void Ezsigndocument_getFormData_v1_Response_mPayload::initializeModel() {

    m_obj_form_data_document_isSet = false;
    m_obj_form_data_document_isValid = false;
}

void Ezsigndocument_getFormData_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigndocument_getFormData_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_form_data_document_isValid = ::Ezmaxapi::fromJsonValue(m_obj_form_data_document, json[QString("objFormDataDocument")]);
    m_obj_form_data_document_isSet = !json[QString("objFormDataDocument")].isNull() && m_obj_form_data_document_isValid;
}

QString Ezsigndocument_getFormData_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigndocument_getFormData_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_form_data_document.isSet()) {
        obj.insert(QString("objFormDataDocument"), ::Ezmaxapi::toJsonValue(m_obj_form_data_document));
    }
    return obj;
}

Custom_FormDataDocument_Response Ezsigndocument_getFormData_v1_Response_mPayload::getObjFormDataDocument() const {
    return m_obj_form_data_document;
}
void Ezsigndocument_getFormData_v1_Response_mPayload::setObjFormDataDocument(const Custom_FormDataDocument_Response &obj_form_data_document) {
    m_obj_form_data_document = obj_form_data_document;
    m_obj_form_data_document_isSet = true;
}

bool Ezsigndocument_getFormData_v1_Response_mPayload::is_obj_form_data_document_Set() const{
    return m_obj_form_data_document_isSet;
}

bool Ezsigndocument_getFormData_v1_Response_mPayload::is_obj_form_data_document_Valid() const{
    return m_obj_form_data_document_isValid;
}

bool Ezsigndocument_getFormData_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_form_data_document.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigndocument_getFormData_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_form_data_document_isValid && true;
}

} // namespace Ezmaxapi

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

#include "Ezsignbulksend_getFormsData_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignbulksend_getFormsData_v1_Response_mPayload::Ezsignbulksend_getFormsData_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignbulksend_getFormsData_v1_Response_mPayload::Ezsignbulksend_getFormsData_v1_Response_mPayload() {
    this->initializeModel();
}

Ezsignbulksend_getFormsData_v1_Response_mPayload::~Ezsignbulksend_getFormsData_v1_Response_mPayload() {}

void Ezsignbulksend_getFormsData_v1_Response_mPayload::initializeModel() {

    m_a_obj_forms_data_folder_isSet = false;
    m_a_obj_forms_data_folder_isValid = false;
}

void Ezsignbulksend_getFormsData_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignbulksend_getFormsData_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_forms_data_folder_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_forms_data_folder, json[QString("a_objFormsDataFolder")]);
    m_a_obj_forms_data_folder_isSet = !json[QString("a_objFormsDataFolder")].isNull() && m_a_obj_forms_data_folder_isValid;
}

QString Ezsignbulksend_getFormsData_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignbulksend_getFormsData_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_forms_data_folder.size() > 0) {
        obj.insert(QString("a_objFormsDataFolder"), ::Ezmaxapi::toJsonValue(m_a_obj_forms_data_folder));
    }
    return obj;
}

QList<Custom_FormsDataFolder_Response> Ezsignbulksend_getFormsData_v1_Response_mPayload::getAObjFormsDataFolder() const {
    return m_a_obj_forms_data_folder;
}
void Ezsignbulksend_getFormsData_v1_Response_mPayload::setAObjFormsDataFolder(const QList<Custom_FormsDataFolder_Response> &a_obj_forms_data_folder) {
    m_a_obj_forms_data_folder = a_obj_forms_data_folder;
    m_a_obj_forms_data_folder_isSet = true;
}

bool Ezsignbulksend_getFormsData_v1_Response_mPayload::is_a_obj_forms_data_folder_Set() const{
    return m_a_obj_forms_data_folder_isSet;
}

bool Ezsignbulksend_getFormsData_v1_Response_mPayload::is_a_obj_forms_data_folder_Valid() const{
    return m_a_obj_forms_data_folder_isValid;
}

bool Ezsignbulksend_getFormsData_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_forms_data_folder.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignbulksend_getFormsData_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_forms_data_folder_isValid && true;
}

} // namespace Ezmaxapi

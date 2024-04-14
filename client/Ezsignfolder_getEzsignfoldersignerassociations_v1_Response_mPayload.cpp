/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload() {
    this->initializeModel();
}

Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::~Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload() {}

void Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsignfoldersignerassociation_isSet = false;
    m_a_obj_ezsignfoldersignerassociation_isValid = false;
}

void Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignfoldersignerassociation_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignfoldersignerassociation, json[QString("a_objEzsignfoldersignerassociation")]);
    m_a_obj_ezsignfoldersignerassociation_isSet = !json[QString("a_objEzsignfoldersignerassociation")].isNull() && m_a_obj_ezsignfoldersignerassociation_isValid;
}

QString Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsignfoldersignerassociation.size() > 0) {
        obj.insert(QString("a_objEzsignfoldersignerassociation"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignfoldersignerassociation));
    }
    return obj;
}

QList<Custom_EzsignfoldersignerassociationActionableElement_Response> Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::getAObjEzsignfoldersignerassociation() const {
    return m_a_obj_ezsignfoldersignerassociation;
}
void Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::setAObjEzsignfoldersignerassociation(const QList<Custom_EzsignfoldersignerassociationActionableElement_Response> &a_obj_ezsignfoldersignerassociation) {
    m_a_obj_ezsignfoldersignerassociation = a_obj_ezsignfoldersignerassociation;
    m_a_obj_ezsignfoldersignerassociation_isSet = true;
}

bool Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::is_a_obj_ezsignfoldersignerassociation_Set() const{
    return m_a_obj_ezsignfoldersignerassociation_isSet;
}

bool Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::is_a_obj_ezsignfoldersignerassociation_Valid() const{
    return m_a_obj_ezsignfoldersignerassociation_isValid;
}

bool Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsignfoldersignerassociation.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignfoldersignerassociation_isValid && true;
}

} // namespace Ezmaxapi

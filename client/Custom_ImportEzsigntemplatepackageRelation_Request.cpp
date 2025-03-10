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

#include "Custom_ImportEzsigntemplatepackageRelation_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Custom_ImportEzsigntemplatepackageRelation_Request::Custom_ImportEzsigntemplatepackageRelation_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Custom_ImportEzsigntemplatepackageRelation_Request::Custom_ImportEzsigntemplatepackageRelation_Request() {
    this->initializeModel();
}

Custom_ImportEzsigntemplatepackageRelation_Request::~Custom_ImportEzsigntemplatepackageRelation_Request() {}

void Custom_ImportEzsigntemplatepackageRelation_Request::initializeModel() {

    m_fki_ezsigntemplatepackagesigner_id_isSet = false;
    m_fki_ezsigntemplatepackagesigner_id_isValid = false;

    m_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_fki_ezsignfoldersignerassociation_id_isValid = false;

    m_s_ezsigntemplatepackagesigner_description_isSet = false;
    m_s_ezsigntemplatepackagesigner_description_isValid = false;
}

void Custom_ImportEzsigntemplatepackageRelation_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Custom_ImportEzsigntemplatepackageRelation_Request::fromJsonObject(QJsonObject json) {

    m_fki_ezsigntemplatepackagesigner_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatepackagesigner_id, json[QString("fkiEzsigntemplatepackagesignerID")]);
    m_fki_ezsigntemplatepackagesigner_id_isSet = !json[QString("fkiEzsigntemplatepackagesignerID")].isNull() && m_fki_ezsigntemplatepackagesigner_id_isValid;

    m_fki_ezsignfoldersignerassociation_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldersignerassociation_id, json[QString("fkiEzsignfoldersignerassociationID")]);
    m_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("fkiEzsignfoldersignerassociationID")].isNull() && m_fki_ezsignfoldersignerassociation_id_isValid;

    m_s_ezsigntemplatepackagesigner_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatepackagesigner_description, json[QString("sEzsigntemplatepackagesignerDescription")]);
    m_s_ezsigntemplatepackagesigner_description_isSet = !json[QString("sEzsigntemplatepackagesignerDescription")].isNull() && m_s_ezsigntemplatepackagesigner_description_isValid;
}

QString Custom_ImportEzsigntemplatepackageRelation_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Custom_ImportEzsigntemplatepackageRelation_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsigntemplatepackagesigner_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackagesignerID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatepackagesigner_id));
    }
    if (m_fki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("fkiEzsignfoldersignerassociationID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldersignerassociation_id));
    }
    if (m_s_ezsigntemplatepackagesigner_description_isSet) {
        obj.insert(QString("sEzsigntemplatepackagesignerDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatepackagesigner_description));
    }
    return obj;
}

qint32 Custom_ImportEzsigntemplatepackageRelation_Request::getFkiEzsigntemplatepackagesignerId() const {
    return m_fki_ezsigntemplatepackagesigner_id;
}
void Custom_ImportEzsigntemplatepackageRelation_Request::setFkiEzsigntemplatepackagesignerId(const qint32 &fki_ezsigntemplatepackagesigner_id) {
    m_fki_ezsigntemplatepackagesigner_id = fki_ezsigntemplatepackagesigner_id;
    m_fki_ezsigntemplatepackagesigner_id_isSet = true;
}

bool Custom_ImportEzsigntemplatepackageRelation_Request::is_fki_ezsigntemplatepackagesigner_id_Set() const{
    return m_fki_ezsigntemplatepackagesigner_id_isSet;
}

bool Custom_ImportEzsigntemplatepackageRelation_Request::is_fki_ezsigntemplatepackagesigner_id_Valid() const{
    return m_fki_ezsigntemplatepackagesigner_id_isValid;
}

qint32 Custom_ImportEzsigntemplatepackageRelation_Request::getFkiEzsignfoldersignerassociationId() const {
    return m_fki_ezsignfoldersignerassociation_id;
}
void Custom_ImportEzsigntemplatepackageRelation_Request::setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id) {
    m_fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    m_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool Custom_ImportEzsigntemplatepackageRelation_Request::is_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_fki_ezsignfoldersignerassociation_id_isSet;
}

bool Custom_ImportEzsigntemplatepackageRelation_Request::is_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_fki_ezsignfoldersignerassociation_id_isValid;
}

QString Custom_ImportEzsigntemplatepackageRelation_Request::getSEzsigntemplatepackagesignerDescription() const {
    return m_s_ezsigntemplatepackagesigner_description;
}
void Custom_ImportEzsigntemplatepackageRelation_Request::setSEzsigntemplatepackagesignerDescription(const QString &s_ezsigntemplatepackagesigner_description) {
    m_s_ezsigntemplatepackagesigner_description = s_ezsigntemplatepackagesigner_description;
    m_s_ezsigntemplatepackagesigner_description_isSet = true;
}

bool Custom_ImportEzsigntemplatepackageRelation_Request::is_s_ezsigntemplatepackagesigner_description_Set() const{
    return m_s_ezsigntemplatepackagesigner_description_isSet;
}

bool Custom_ImportEzsigntemplatepackageRelation_Request::is_s_ezsigntemplatepackagesigner_description_Valid() const{
    return m_s_ezsigntemplatepackagesigner_description_isValid;
}

bool Custom_ImportEzsigntemplatepackageRelation_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsigntemplatepackagesigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatepackagesigner_description_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Custom_ImportEzsigntemplatepackageRelation_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfoldersignerassociation_id_isValid && true;
}

} // namespace Ezmaxapi

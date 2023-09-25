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

#include "Ezsignfolder_importEzsigntemplatepackage_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignfolder_importEzsigntemplatepackage_v1_Request::Ezsignfolder_importEzsigntemplatepackage_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignfolder_importEzsigntemplatepackage_v1_Request::Ezsignfolder_importEzsigntemplatepackage_v1_Request() {
    this->initializeModel();
}

Ezsignfolder_importEzsigntemplatepackage_v1_Request::~Ezsignfolder_importEzsigntemplatepackage_v1_Request() {}

void Ezsignfolder_importEzsigntemplatepackage_v1_Request::initializeModel() {

    m_fki_ezsigntemplatepackage_id_isSet = false;
    m_fki_ezsigntemplatepackage_id_isValid = false;

    m_dt_ezsigndocument_duedate_isSet = false;
    m_dt_ezsigndocument_duedate_isValid = false;

    m_a_obj_import_ezsigntemplatepackage_relation_isSet = false;
    m_a_obj_import_ezsigntemplatepackage_relation_isValid = false;
}

void Ezsignfolder_importEzsigntemplatepackage_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignfolder_importEzsigntemplatepackage_v1_Request::fromJsonObject(QJsonObject json) {

    m_fki_ezsigntemplatepackage_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_dt_ezsigndocument_duedate_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezsigndocument_duedate, json[QString("dtEzsigndocumentDuedate")]);
    m_dt_ezsigndocument_duedate_isSet = !json[QString("dtEzsigndocumentDuedate")].isNull() && m_dt_ezsigndocument_duedate_isValid;

    m_a_obj_import_ezsigntemplatepackage_relation_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_import_ezsigntemplatepackage_relation, json[QString("a_objImportEzsigntemplatepackageRelation")]);
    m_a_obj_import_ezsigntemplatepackage_relation_isSet = !json[QString("a_objImportEzsigntemplatepackageRelation")].isNull() && m_a_obj_import_ezsigntemplatepackage_relation_isValid;
}

QString Ezsignfolder_importEzsigntemplatepackage_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignfolder_importEzsigntemplatepackage_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackageID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatepackage_id));
    }
    if (m_dt_ezsigndocument_duedate_isSet) {
        obj.insert(QString("dtEzsigndocumentDuedate"), ::Ezmaxapi::toJsonValue(m_dt_ezsigndocument_duedate));
    }
    if (m_a_obj_import_ezsigntemplatepackage_relation.size() > 0) {
        obj.insert(QString("a_objImportEzsigntemplatepackageRelation"), ::Ezmaxapi::toJsonValue(m_a_obj_import_ezsigntemplatepackage_relation));
    }
    return obj;
}

qint32 Ezsignfolder_importEzsigntemplatepackage_v1_Request::getFkiEzsigntemplatepackageId() const {
    return m_fki_ezsigntemplatepackage_id;
}
void Ezsignfolder_importEzsigntemplatepackage_v1_Request::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    m_fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool Ezsignfolder_importEzsigntemplatepackage_v1_Request::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool Ezsignfolder_importEzsigntemplatepackage_v1_Request::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

QString Ezsignfolder_importEzsigntemplatepackage_v1_Request::getDtEzsigndocumentDuedate() const {
    return m_dt_ezsigndocument_duedate;
}
void Ezsignfolder_importEzsigntemplatepackage_v1_Request::setDtEzsigndocumentDuedate(const QString &dt_ezsigndocument_duedate) {
    m_dt_ezsigndocument_duedate = dt_ezsigndocument_duedate;
    m_dt_ezsigndocument_duedate_isSet = true;
}

bool Ezsignfolder_importEzsigntemplatepackage_v1_Request::is_dt_ezsigndocument_duedate_Set() const{
    return m_dt_ezsigndocument_duedate_isSet;
}

bool Ezsignfolder_importEzsigntemplatepackage_v1_Request::is_dt_ezsigndocument_duedate_Valid() const{
    return m_dt_ezsigndocument_duedate_isValid;
}

QList<Custom_ImportEzsigntemplatepackageRelation_Request> Ezsignfolder_importEzsigntemplatepackage_v1_Request::getAObjImportEzsigntemplatepackageRelation() const {
    return m_a_obj_import_ezsigntemplatepackage_relation;
}
void Ezsignfolder_importEzsigntemplatepackage_v1_Request::setAObjImportEzsigntemplatepackageRelation(const QList<Custom_ImportEzsigntemplatepackageRelation_Request> &a_obj_import_ezsigntemplatepackage_relation) {
    m_a_obj_import_ezsigntemplatepackage_relation = a_obj_import_ezsigntemplatepackage_relation;
    m_a_obj_import_ezsigntemplatepackage_relation_isSet = true;
}

bool Ezsignfolder_importEzsigntemplatepackage_v1_Request::is_a_obj_import_ezsigntemplatepackage_relation_Set() const{
    return m_a_obj_import_ezsigntemplatepackage_relation_isSet;
}

bool Ezsignfolder_importEzsigntemplatepackage_v1_Request::is_a_obj_import_ezsigntemplatepackage_relation_Valid() const{
    return m_a_obj_import_ezsigntemplatepackage_relation_isValid;
}

bool Ezsignfolder_importEzsigntemplatepackage_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsigntemplatepackage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsigndocument_duedate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_import_ezsigntemplatepackage_relation.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignfolder_importEzsigntemplatepackage_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsigntemplatepackage_id_isValid && m_dt_ezsigndocument_duedate_isValid && m_a_obj_import_ezsigntemplatepackage_relation_isValid && true;
}

} // namespace Ezmaxapi
